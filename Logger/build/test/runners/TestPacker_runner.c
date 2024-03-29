/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#ifndef TEST_INSTANCES
#define TEST_INSTANCES
#endif /* TEST_INSTANCES */
#include "stdint.h"
#include "Core.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_Packer_AddMsg_Should_PackZeroLengthMessages(void);
extern void test_Packer_AddMsg_Should_PackOneByteMessages(void);
extern void test_Packer_AddMsg_Should_Pack5ByteMessages(void);
extern void test_Packer_AddMsg_Should_Pack12ByteMessages(void);
extern void test_Packer_AddMsg_Should_ReturnNullForInvalidCommands(void);
extern void test_Packer_AddMsg_Should_ReturnNullForInvalidLengths(void);
extern void test_Packer_AddMsg_Should_ReturnNullForNullDataWhenNonZeroLen(void);
extern void test_Packer_AddMsg_Should_NeverOverflow(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, int line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("TestPacker.c");
  run_test(test_Packer_AddMsg_Should_PackZeroLengthMessages, "test_Packer_AddMsg_Should_PackZeroLengthMessages", 14);
  run_test(test_Packer_AddMsg_Should_PackOneByteMessages, "test_Packer_AddMsg_Should_PackOneByteMessages", 18);
  run_test(test_Packer_AddMsg_Should_Pack5ByteMessages, "test_Packer_AddMsg_Should_Pack5ByteMessages", 24);
  run_test(test_Packer_AddMsg_Should_Pack12ByteMessages, "test_Packer_AddMsg_Should_Pack12ByteMessages", 30);
  run_test(test_Packer_AddMsg_Should_ReturnNullForInvalidCommands, "test_Packer_AddMsg_Should_ReturnNullForInvalidCommands", 35);
  run_test(test_Packer_AddMsg_Should_ReturnNullForInvalidLengths, "test_Packer_AddMsg_Should_ReturnNullForInvalidLengths", 47);
  run_test(test_Packer_AddMsg_Should_ReturnNullForNullDataWhenNonZeroLen, "test_Packer_AddMsg_Should_ReturnNullForNullDataWhenNonZeroLen", 53);
  run_test(test_Packer_AddMsg_Should_NeverOverflow, "test_Packer_AddMsg_Should_NeverOverflow", 57);

  return UnityEnd();
}
