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
extern void test_Parser_AddChar_should_StartLookingForCmdOnLeftBracket(void);
extern void test_Parser_AddChar_should_RejectNonBracketCharactersWhileSeekingStart(void);
extern void test_Parser_AddChar_should_AcceptAValidCommandCharacter(void);
extern void test_Parser_AddChar_should_RejectInvalidCommandCharacter(void);
extern void test_Parser_AddChar_should_AcceptALengthOfZero(void);
extern void test_Parser_AddChar_should_RejectInvalidLengths(void);
extern void test_Parser_AddChar_should_HandleValidPacketWithNoData(void);
extern void test_Parser_AddChar_should_HandleBackToBackValidPackets(void);
extern void test_Parser_AddChar_should_HandlePacketsWithLength1(void);
extern void test_Parser_AddChar_should_HandlePacketsWithLength9(void);
extern void test_Parser_AddChar_should_HandleDifferentLengthPacketsBackToBack(void);
extern void test_Parser_AddChar_should_IgnoreBadStartCharacters(void);
extern void test_Parser_AddChar_should_IgnoreBadCommandCharacters(void);
extern void test_Parser_AddChar_should_IgnoreBadLengthCharacters(void);
extern void test_Parser_AddChar_should_IgnoreBadHexCharacters(void);
extern void test_Parser_AddChar_should_IgnoreJunkBetweenValidPackets(void);


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

/*=======Setup (stub)=====*/
void setUp(void) {}

/*=======Teardown (stub)=====*/
void tearDown(void) {}

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
  UnityBegin("TestParser.c");
  run_test(test_Parser_AddChar_should_StartLookingForCmdOnLeftBracket, "test_Parser_AddChar_should_StartLookingForCmdOnLeftBracket", 10);
  run_test(test_Parser_AddChar_should_RejectNonBracketCharactersWhileSeekingStart, "test_Parser_AddChar_should_RejectNonBracketCharactersWhileSeekingStart", 19);
  run_test(test_Parser_AddChar_should_AcceptAValidCommandCharacter, "test_Parser_AddChar_should_AcceptAValidCommandCharacter", 32);
  run_test(test_Parser_AddChar_should_RejectInvalidCommandCharacter, "test_Parser_AddChar_should_RejectInvalidCommandCharacter", 47);
  run_test(test_Parser_AddChar_should_AcceptALengthOfZero, "test_Parser_AddChar_should_AcceptALengthOfZero", 60);
  run_test(test_Parser_AddChar_should_RejectInvalidLengths, "test_Parser_AddChar_should_RejectInvalidLengths", 67);
  run_test(test_Parser_AddChar_should_HandleValidPacketWithNoData, "test_Parser_AddChar_should_HandleValidPacketWithNoData", 106);
  run_test(test_Parser_AddChar_should_HandleBackToBackValidPackets, "test_Parser_AddChar_should_HandleBackToBackValidPackets", 111);
  run_test(test_Parser_AddChar_should_HandlePacketsWithLength1, "test_Parser_AddChar_should_HandlePacketsWithLength1", 118);
  run_test(test_Parser_AddChar_should_HandlePacketsWithLength9, "test_Parser_AddChar_should_HandlePacketsWithLength9", 123);
  run_test(test_Parser_AddChar_should_HandleDifferentLengthPacketsBackToBack, "test_Parser_AddChar_should_HandleDifferentLengthPacketsBackToBack", 128);
  run_test(test_Parser_AddChar_should_IgnoreBadStartCharacters, "test_Parser_AddChar_should_IgnoreBadStartCharacters", 137);
  run_test(test_Parser_AddChar_should_IgnoreBadCommandCharacters, "test_Parser_AddChar_should_IgnoreBadCommandCharacters", 147);
  run_test(test_Parser_AddChar_should_IgnoreBadLengthCharacters, "test_Parser_AddChar_should_IgnoreBadLengthCharacters", 160);
  run_test(test_Parser_AddChar_should_IgnoreBadHexCharacters, "test_Parser_AddChar_should_IgnoreBadHexCharacters", 174);
  run_test(test_Parser_AddChar_should_IgnoreJunkBetweenValidPackets, "test_Parser_AddChar_should_IgnoreJunkBetweenValidPackets", 206);

  return UnityEnd();
}
