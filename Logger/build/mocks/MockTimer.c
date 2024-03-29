/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "MockTimer.h"

static const char* CMockString_Stamp = "Stamp";
static const char* CMockString_StartStamp = "StartStamp";
static const char* CMockString_Timer_GetStamp = "Timer_GetStamp";
static const char* CMockString_Timer_Init = "Timer_Init";
static const char* CMockString_Timer_SetStamp = "Timer_SetStamp";
static const char* CMockString_Timer_WaitMilli = "Timer_WaitMilli";
static const char* CMockString_Timer_WaitRemainder = "Timer_WaitRemainder";
static const char* CMockString_msec = "msec";

typedef struct _CMOCK_Timer_Init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;

} CMOCK_Timer_Init_CALL_INSTANCE;

typedef struct _CMOCK_Timer_SetStamp_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  uint32_t Expected_Stamp;
  char IgnoreArg_Stamp;

} CMOCK_Timer_SetStamp_CALL_INSTANCE;

typedef struct _CMOCK_Timer_GetStamp_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  uint32_t ReturnVal;

} CMOCK_Timer_GetStamp_CALL_INSTANCE;

typedef struct _CMOCK_Timer_WaitMilli_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  uint32_t Expected_msec;
  char IgnoreArg_msec;

} CMOCK_Timer_WaitMilli_CALL_INSTANCE;

typedef struct _CMOCK_Timer_WaitRemainder_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  uint32_t ReturnVal;
  uint32_t Expected_StartStamp;
  uint32_t Expected_msec;
  char IgnoreArg_StartStamp;
  char IgnoreArg_msec;

} CMOCK_Timer_WaitRemainder_CALL_INSTANCE;

static struct MockTimerInstance
{
  char Timer_Init_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE Timer_Init_CallInstance;
  char Timer_SetStamp_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE Timer_SetStamp_CallInstance;
  char Timer_GetStamp_IgnoreBool;
  uint32_t Timer_GetStamp_FinalReturn;
  CMOCK_MEM_INDEX_TYPE Timer_GetStamp_CallInstance;
  char Timer_WaitMilli_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE Timer_WaitMilli_CallInstance;
  char Timer_WaitRemainder_IgnoreBool;
  uint32_t Timer_WaitRemainder_FinalReturn;
  CMOCK_MEM_INDEX_TYPE Timer_WaitRemainder_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void MockTimer_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.Timer_Init_CallInstance;
  if (Mock.Timer_Init_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Timer_Init);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.Timer_SetStamp_CallInstance;
  if (Mock.Timer_SetStamp_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Timer_SetStamp);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.Timer_GetStamp_CallInstance;
  if (Mock.Timer_GetStamp_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Timer_GetStamp);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.Timer_WaitMilli_CallInstance;
  if (Mock.Timer_WaitMilli_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Timer_WaitMilli);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.Timer_WaitRemainder_CallInstance;
  if (Mock.Timer_WaitRemainder_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Timer_WaitRemainder);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void MockTimer_Init(void)
{
  MockTimer_Destroy();
}

void MockTimer_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

void Timer_Init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Timer_Init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Timer_Init);
  cmock_call_instance = (CMOCK_Timer_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Timer_Init_CallInstance);
  Mock.Timer_Init_CallInstance = CMock_Guts_MemNext(Mock.Timer_Init_CallInstance);
  if (Mock.Timer_Init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void Timer_Init_CMockIgnore(void)
{
  Mock.Timer_Init_IgnoreBool = (char)1;
}

void Timer_Init_CMockStopIgnore(void)
{
  Mock.Timer_Init_IgnoreBool = (char)0;
}

void Timer_Init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_Init_CALL_INSTANCE));
  CMOCK_Timer_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_Init_CallInstance = CMock_Guts_MemChain(Mock.Timer_Init_CallInstance, cmock_guts_index);
  Mock.Timer_Init_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
}

void Timer_SetStamp(uint32_t Stamp)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Timer_SetStamp_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Timer_SetStamp);
  cmock_call_instance = (CMOCK_Timer_SetStamp_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Timer_SetStamp_CallInstance);
  Mock.Timer_SetStamp_CallInstance = CMock_Guts_MemNext(Mock.Timer_SetStamp_CallInstance);
  if (Mock.Timer_SetStamp_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_Stamp)
  {
    UNITY_SET_DETAILS(CMockString_Timer_SetStamp,CMockString_Stamp);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_Stamp, Stamp, cmock_line, CMockStringMismatch);
  }
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_Timer_SetStamp(CMOCK_Timer_SetStamp_CALL_INSTANCE* cmock_call_instance, uint32_t Stamp)
{
  cmock_call_instance->Expected_Stamp = Stamp;
  cmock_call_instance->IgnoreArg_Stamp = 0;
}

void Timer_SetStamp_CMockIgnore(void)
{
  Mock.Timer_SetStamp_IgnoreBool = (char)1;
}

void Timer_SetStamp_CMockStopIgnore(void)
{
  Mock.Timer_SetStamp_IgnoreBool = (char)0;
}

void Timer_SetStamp_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_SetStamp_CALL_INSTANCE));
  CMOCK_Timer_SetStamp_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_SetStamp_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_SetStamp_CallInstance = CMock_Guts_MemChain(Mock.Timer_SetStamp_CallInstance, cmock_guts_index);
  Mock.Timer_SetStamp_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void Timer_SetStamp_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t Stamp)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_SetStamp_CALL_INSTANCE));
  CMOCK_Timer_SetStamp_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_SetStamp_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_SetStamp_CallInstance = CMock_Guts_MemChain(Mock.Timer_SetStamp_CallInstance, cmock_guts_index);
  Mock.Timer_SetStamp_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_Timer_SetStamp(cmock_call_instance, Stamp);
}

void Timer_SetStamp_CMockIgnoreArg_Stamp(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_Timer_SetStamp_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_SetStamp_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Timer_SetStamp_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_Stamp = 1;
}

uint32_t Timer_GetStamp(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Timer_GetStamp_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Timer_GetStamp);
  cmock_call_instance = (CMOCK_Timer_GetStamp_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Timer_GetStamp_CallInstance);
  Mock.Timer_GetStamp_CallInstance = CMock_Guts_MemNext(Mock.Timer_GetStamp_CallInstance);
  if (Mock.Timer_GetStamp_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.Timer_GetStamp_FinalReturn;
    Mock.Timer_GetStamp_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void Timer_GetStamp_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_GetStamp_CALL_INSTANCE));
  CMOCK_Timer_GetStamp_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_GetStamp_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_GetStamp_CallInstance = CMock_Guts_MemChain(Mock.Timer_GetStamp_CallInstance, cmock_guts_index);
  Mock.Timer_GetStamp_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Timer_GetStamp_IgnoreBool = (char)1;
}

void Timer_GetStamp_CMockStopIgnore(void)
{
  if(Mock.Timer_GetStamp_IgnoreBool)
    Mock.Timer_GetStamp_CallInstance = CMock_Guts_MemNext(Mock.Timer_GetStamp_CallInstance);
  Mock.Timer_GetStamp_IgnoreBool = (char)0;
}

void Timer_GetStamp_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_GetStamp_CALL_INSTANCE));
  CMOCK_Timer_GetStamp_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_GetStamp_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_GetStamp_CallInstance = CMock_Guts_MemChain(Mock.Timer_GetStamp_CallInstance, cmock_guts_index);
  Mock.Timer_GetStamp_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void Timer_WaitMilli(uint32_t msec)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Timer_WaitMilli_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Timer_WaitMilli);
  cmock_call_instance = (CMOCK_Timer_WaitMilli_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Timer_WaitMilli_CallInstance);
  Mock.Timer_WaitMilli_CallInstance = CMock_Guts_MemNext(Mock.Timer_WaitMilli_CallInstance);
  if (Mock.Timer_WaitMilli_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_msec)
  {
    UNITY_SET_DETAILS(CMockString_Timer_WaitMilli,CMockString_msec);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_msec, msec, cmock_line, CMockStringMismatch);
  }
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_Timer_WaitMilli(CMOCK_Timer_WaitMilli_CALL_INSTANCE* cmock_call_instance, uint32_t msec)
{
  cmock_call_instance->Expected_msec = msec;
  cmock_call_instance->IgnoreArg_msec = 0;
}

void Timer_WaitMilli_CMockIgnore(void)
{
  Mock.Timer_WaitMilli_IgnoreBool = (char)1;
}

void Timer_WaitMilli_CMockStopIgnore(void)
{
  Mock.Timer_WaitMilli_IgnoreBool = (char)0;
}

void Timer_WaitMilli_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_WaitMilli_CALL_INSTANCE));
  CMOCK_Timer_WaitMilli_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_WaitMilli_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_WaitMilli_CallInstance = CMock_Guts_MemChain(Mock.Timer_WaitMilli_CallInstance, cmock_guts_index);
  Mock.Timer_WaitMilli_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void Timer_WaitMilli_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t msec)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_WaitMilli_CALL_INSTANCE));
  CMOCK_Timer_WaitMilli_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_WaitMilli_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_WaitMilli_CallInstance = CMock_Guts_MemChain(Mock.Timer_WaitMilli_CallInstance, cmock_guts_index);
  Mock.Timer_WaitMilli_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_Timer_WaitMilli(cmock_call_instance, msec);
}

void Timer_WaitMilli_CMockIgnoreArg_msec(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_Timer_WaitMilli_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_WaitMilli_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Timer_WaitMilli_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_msec = 1;
}

uint32_t Timer_WaitRemainder(uint32_t StartStamp, uint32_t msec)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Timer_WaitRemainder_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Timer_WaitRemainder);
  cmock_call_instance = (CMOCK_Timer_WaitRemainder_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Timer_WaitRemainder_CallInstance);
  Mock.Timer_WaitRemainder_CallInstance = CMock_Guts_MemNext(Mock.Timer_WaitRemainder_CallInstance);
  if (Mock.Timer_WaitRemainder_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.Timer_WaitRemainder_FinalReturn;
    Mock.Timer_WaitRemainder_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_StartStamp)
  {
    UNITY_SET_DETAILS(CMockString_Timer_WaitRemainder,CMockString_StartStamp);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_StartStamp, StartStamp, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_msec)
  {
    UNITY_SET_DETAILS(CMockString_Timer_WaitRemainder,CMockString_msec);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_msec, msec, cmock_line, CMockStringMismatch);
  }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_Timer_WaitRemainder(CMOCK_Timer_WaitRemainder_CALL_INSTANCE* cmock_call_instance, uint32_t StartStamp, uint32_t msec)
{
  cmock_call_instance->Expected_StartStamp = StartStamp;
  cmock_call_instance->IgnoreArg_StartStamp = 0;
  cmock_call_instance->Expected_msec = msec;
  cmock_call_instance->IgnoreArg_msec = 0;
}

void Timer_WaitRemainder_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_WaitRemainder_CALL_INSTANCE));
  CMOCK_Timer_WaitRemainder_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_WaitRemainder_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_WaitRemainder_CallInstance = CMock_Guts_MemChain(Mock.Timer_WaitRemainder_CallInstance, cmock_guts_index);
  Mock.Timer_WaitRemainder_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Timer_WaitRemainder_IgnoreBool = (char)1;
}

void Timer_WaitRemainder_CMockStopIgnore(void)
{
  if(Mock.Timer_WaitRemainder_IgnoreBool)
    Mock.Timer_WaitRemainder_CallInstance = CMock_Guts_MemNext(Mock.Timer_WaitRemainder_CallInstance);
  Mock.Timer_WaitRemainder_IgnoreBool = (char)0;
}

void Timer_WaitRemainder_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_WaitRemainder_CALL_INSTANCE));
  CMOCK_Timer_WaitRemainder_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_WaitRemainder_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_WaitRemainder_CallInstance = CMock_Guts_MemChain(Mock.Timer_WaitRemainder_CallInstance, cmock_guts_index);
  Mock.Timer_WaitRemainder_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void Timer_WaitRemainder_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t StartStamp, uint32_t msec, uint32_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_WaitRemainder_CALL_INSTANCE));
  CMOCK_Timer_WaitRemainder_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_WaitRemainder_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_WaitRemainder_CallInstance = CMock_Guts_MemChain(Mock.Timer_WaitRemainder_CallInstance, cmock_guts_index);
  Mock.Timer_WaitRemainder_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_Timer_WaitRemainder(cmock_call_instance, StartStamp, msec);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void Timer_WaitRemainder_CMockIgnoreArg_StartStamp(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_Timer_WaitRemainder_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_WaitRemainder_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Timer_WaitRemainder_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_StartStamp = 1;
}

void Timer_WaitRemainder_CMockIgnoreArg_msec(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_Timer_WaitRemainder_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_WaitRemainder_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Timer_WaitRemainder_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_msec = 1;
}

