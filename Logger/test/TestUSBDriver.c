#include "unity.h"
#include "Utils.h"
#include "MockBuffer.h"
#include "USBDriver.h"
#include "Mockserial_api.h"


BUFFER_T tx;
BUFFER_T rx;
serial_t USBDriver_serial;
uint8_t tx_data[USB_BUFFER_MAX];
uint8_t rx_data[USB_BUFFER_MAX];
void setUp(void)
{
}

void tearDown(void)
{
}

void test_USBDriver_Init_should_InitTheBuffers_and_ConfigureTheSerialPort(void)
{
	TEST_ASSERT_FALSE(USBDriver_Connected());
	Buffer_Init_ExpectAndReturn(&tx, tx_data, USB_BUFFER_MAX, STATUS_OK);
	Buffer_Init_ExpectAndReturn(&rx, rx_data, USB_BUFFER_MAX, STATUS_OK);
	serial_init_Expect(&USBDriver_serial, USBTX, USBRX);
	serial_clear_Expect(&USBDriver_serial);
	USBDriver_Init();
	TEST_ASSERT_TRUE(USBDriver_Connected());
}
void test_USBDriver_Exec_should_DoNothing_When_NothingToWrite_and_NothingToRead(void)
{
	Buffer_IsEmpty_IgnoreAndReturn(TRUE);
	serial_writable_IgnoreAndReturn(1);
	serial_readable_IgnoreAndReturn(0);
	Buffer_IsFull_IgnoreAndReturn(FALSE);
	USBDriver_Exec();
}
void test_USBDriver_Exec_should_DoNothing_TooFullToRead_andTooFullToWrite(void)
{
	serial_writable_IgnoreAndReturn(0);
	Buffer_IsEmpty_IgnoreAndReturn(0);
	Buffer_IsFull_IgnoreAndReturn(TRUE);
	serial_readable_IgnoreAndReturn(1);
	USBDriver_Exec();
}
void test_USBDriver_Exec_should_WriteAByte_when_OneByteBufferedAndWriteable(void)
{
	uint8_t test_char = '$';

	serial_writable_IgnoreAndReturn(TRUE);
	Buffer_IsEmpty_IgnoreAndReturn(FALSE);
	Buffer_IsFull_IgnoreAndReturn(TRUE);
	serial_readable_IgnoreAndReturn(TRUE);

	Buffer_Get_ExpectAnyArgsAndReturn(STATUS_OK);
	Buffer_Get_ReturnThruPtr_Val(&test_char);

	serial_putc_Expect(&USBDriver_serial,test_char);
	Buffer_Get_ExpectAnyArgsAndReturn(STATUS_NONE_YET);

	USBDriver_Exec();

}
void test_USBDriver_Exec_should_NOT_WriteAByte_when_CannotFetchByte(void)
{
	serial_writable_IgnoreAndReturn(TRUE);
	Buffer_IsEmpty_IgnoreAndReturn(FALSE);
	Buffer_IsFull_IgnoreAndReturn(TRUE);
	serial_readable_IgnoreAndReturn(TRUE);

	Buffer_Get_ExpectAnyArgsAndReturn(STATUS_NONE_YET);

	USBDriver_Exec();

}
void test_USBDriver_Exec_should_Read_And_Buffer_AByte_when_OneByteIsAvailabe(void)
{
	uint8_t test_char = '&';
	serial_writable_IgnoreAndReturn(TRUE);
	Buffer_IsEmpty_IgnoreAndReturn(TRUE);
	Buffer_IsFull_IgnoreAndReturn(FALSE);
	serial_readable_IgnoreAndReturn(TRUE);

	 //The first time through the loop, we have a character
	serial_getc_ExpectAndReturn(&USBDriver_serial, test_char);
	Buffer_Put_ExpectAndReturn(&rx, test_char, STATUS_OK);

	 //now we don't  have a character
	serial_readable_IgnoreAndReturn(FALSE);

	USBDriver_Exec();
}
void test_USBDriver_Exec_shouldRead_AndBuffer_Bytes_whenSeveralAreAvailableAndReadable(void)
{
	int i;
	uint8_t Vals[5] = { 'Q', 'R', 'S', 'T', 'U' };
	serial_writable_IgnoreAndReturn(TRUE);
	Buffer_IsEmpty_IgnoreAndReturn(TRUE);
	Buffer_IsFull_IgnoreAndReturn(FALSE);


	for(i = 0; i< DIMENSION_OF(Vals); i++)
	{
		serial_readable_IgnoreAndReturn(TRUE);
		serial_getc_ExpectAndReturn(&USBDriver_serial, Vals[i]);
		Buffer_Put_ExpectAndReturn(&rx,Vals[i], STATUS_OK);
	}
	 //now we don't  have a character
	serial_readable_IgnoreAndReturn(FALSE);

	USBDriver_Exec();
}
void test_USBDriver_Exec_should_WriteBytes_when_BytesBufferedAndWritable(void)
{
    uint8_t a = 'A';
    uint8_t b = 'B';
    uint8_t c = 'C';

    serial_writable_IgnoreAndReturn(TRUE);
    Buffer_IsFull_IgnoreAndReturn(TRUE);
    serial_readable_IgnoreAndReturn(TRUE);

    //The first time through the loop, we have a character
    Buffer_IsEmpty_IgnoreAndReturn(FALSE);
    Buffer_Get_ExpectAnyArgsAndReturn(STATUS_OK);
    Buffer_Get_ReturnThruPtr_Val(&a);
    serial_putc_Expect(&USBDriver_serial, a);

    //The second time through the loop, we have a character
    Buffer_IsEmpty_IgnoreAndReturn(FALSE);
    Buffer_Get_ExpectAnyArgsAndReturn(STATUS_OK);
    Buffer_Get_ReturnThruPtr_Val(&b);
    serial_putc_Expect(&USBDriver_serial, b);

    //The third time through the loop, we have a character
    Buffer_IsEmpty_IgnoreAndReturn(FALSE);
    Buffer_Get_ExpectAnyArgsAndReturn(STATUS_OK);
    Buffer_Get_ReturnThruPtr_Val(&c);
    serial_putc_Expect(&USBDriver_serial, c);

    //The fourth time through the loop, we don't have a character any longer
    Buffer_IsEmpty_IgnoreAndReturn(TRUE);

    USBDriver_Exec();

}
void test_USBDriver_PutChar_should_returnFalse_whenFull(void)
{
	Buffer_IsFull_ExpectAndReturn(&tx, TRUE);
	TEST_ASSERT_FALSE(USBDriver_PutChar('S'));
}
void test_USBDriver_PutChar_should_bufferBytesIntoTransmitQue_IfBufferIsNotFull(void)
{
	Buffer_IsFull_ExpectAndReturn(&tx, FALSE);
	Buffer_Put_ExpectAndReturn(&tx,'S', STATUS_OK);
	TEST_ASSERT_TRUE(USBDriver_PutChar('S'));

	Buffer_IsFull_ExpectAndReturn(&tx, FALSE);
	Buffer_Put_ExpectAndReturn(&tx,'T', STATUS_OK);
	TEST_ASSERT_TRUE(USBDriver_PutChar('T'));

	Buffer_IsFull_ExpectAndReturn(&tx, FALSE);
	Buffer_Put_ExpectAndReturn(&tx,'J', STATUS_OK);
	TEST_ASSERT_TRUE(USBDriver_PutChar('J'));
}
void test_USBDriver_GetChar_should_GrabBytesFromReceiveQueue_when_NotEmpty(void)
{
    int i;
    uint8_t vals[5] = { 'Z', 'Y', 'X', 'W', 'V' };

    for (i=0; i < DIMENSION_OF(vals); i++) {
        Buffer_Get_ExpectAnyArgsAndReturn(STATUS_OK);
        Buffer_Get_ReturnThruPtr_Val( &vals[i] );

        TEST_ASSERT_EQUAL_HEX8( vals[i], USBDriver_GetChar() );
    }
}

void test_USBDriver_GetChar_should_ReturnZero_when_Empty(void)
{
    Buffer_Get_ExpectAnyArgsAndReturn(STATUS_NONE_YET);

    TEST_ASSERT_EQUAL_HEX8( 0, USBDriver_GetChar() );
}

void test_USBDriver_OkayToRead_should_NegateReceiveEmptyStatus(void)
{
    Buffer_IsEmpty_ExpectAndReturn(&rx, FALSE);

    TEST_ASSERT_TRUE( USBDriver_OkayToRead() );

    Buffer_IsEmpty_ExpectAndReturn(&rx, TRUE);

    TEST_ASSERT_FALSE( USBDriver_OkayToRead() );
}
