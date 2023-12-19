#include "unity.h"

#include "Packer.h"

#define TEST_MAX_LEN_ALLOWED 35
void setUp(void)
{
}

void tearDown(void)
{
}

void test_Packer_AddMsg_Should_PackZeroLengthMessages(void)
{
    TEST_ASSERT_EQUAL_STRING("[Z0]", Packer_AddMsg('Z',NULL,0));
}
void test_Packer_AddMsg_Should_PackOneByteMessages(void)
{
    char* Data = "012345678901234567890";

    TEST_ASSERT_EQUAL_STRING("[Z101]", Packer_AddMsg('Z', Data, 1));
}
void test_Packer_AddMsg_Should_Pack5ByteMessages(void)
{
    char* Data = "01234567890123456789083289322";

    TEST_ASSERT_EQUAL_STRING("[Z50123456789]", Packer_AddMsg('Z', Data, 5));
}
void test_Packer_AddMsg_Should_Pack12ByteMessages(void)
{
	char* Data = "01234567890123456789083289322";
	TEST_ASSERT_EQUAL_STRING("[ZC012345678901234567890832]", Packer_AddMsg('Z', Data, 12));
}
void test_Packer_AddMsg_Should_ReturnNullForInvalidCommands(void)
{
    char* Data = "012345678901234567890";

    TEST_ASSERT_NULL(Packer_AddMsg('?', Data, 2));
    TEST_ASSERT_NULL(Packer_AddMsg('!', Data, 2));
    TEST_ASSERT_NULL(Packer_AddMsg('@', Data, 2));
    TEST_ASSERT_NULL(Packer_AddMsg('1', Data, 2));
    TEST_ASSERT_NULL(Packer_AddMsg('a', Data, 2));
    TEST_ASSERT_NULL(Packer_AddMsg('z', Data, 2));
    TEST_ASSERT_NULL(Packer_AddMsg('9', Data, 2));
}
void test_Packer_AddMsg_Should_ReturnNullForInvalidLengths(void)
{
    char* Data = "012345678901234567890";

    TEST_ASSERT_NULL(Packer_AddMsg('Z', Data, TEST_MAX_LEN_ALLOWED + 1));
}
void test_Packer_AddMsg_Should_ReturnNullForNullDataWhenNonZeroLen(void)
{
    TEST_ASSERT_NULL(Packer_AddMsg('Z', NULL, 1));
}
void test_Packer_AddMsg_Should_NeverOverflow(void)
{
    int overhead = 4; // number of bytesbracket, cmd, len, end-bracket
    int max_len  = TEST_MAX_LEN_ALLOWED * 2;
    TEST_ASSERT_MESSAGE( overhead + max_len <= PACKER_MAX_LEN, "Buffer Too Small For Max Length Message");
}

