/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "MockCommandHardware.h"

static const char* CMockString_CommandHardware_CheckForMsg = "CommandHardware_CheckForMsg";
static const char* CMockString_CommandHardware_Exec = "CommandHardware_Exec";
static const char* CMockString_CommandHardware_Init = "CommandHardware_Init";
static const char* CMockString_CommandHardware_SendError = "CommandHardware_SendError";
static const char* CMockString_CommandHardware_SendResponse = "CommandHardware_SendResponse";
static const char* CMockString_Error = "Error";
static const char* CMockString_msg = "msg";

typedef struct _CMOCK_CommandHardware_Init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;

} CMOCK_CommandHardware_Init_CALL_INSTANCE;

typedef struct _CMOCK_CommandHardware_Exec_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;

} CMOCK_CommandHardware_Exec_CALL_INSTANCE;

typedef struct _CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  STATUS_T ReturnVal;
  MESSAGE_T* Expected_msg;
  int Expected_msg_Depth;
  char ReturnThruPtr_msg_Used;
  MESSAGE_T* ReturnThruPtr_msg_Val;
  int ReturnThruPtr_msg_Size;

} CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE;

typedef struct _CMOCK_CommandHardware_SendResponse_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  STATUS_T ReturnVal;
  MESSAGE_T* Expected_msg;
  int Expected_msg_Depth;
  char ReturnThruPtr_msg_Used;
  MESSAGE_T* ReturnThruPtr_msg_Val;
  int ReturnThruPtr_msg_Size;

} CMOCK_CommandHardware_SendResponse_CALL_INSTANCE;

typedef struct _CMOCK_CommandHardware_SendError_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  STATUS_T ReturnVal;
  MESSAGE_T* Expected_msg;
  STATUS_T Expected_Error;
  int Expected_msg_Depth;
  char ReturnThruPtr_msg_Used;
  MESSAGE_T* ReturnThruPtr_msg_Val;
  int ReturnThruPtr_msg_Size;

} CMOCK_CommandHardware_SendError_CALL_INSTANCE;

static struct MockCommandHardwareInstance
{
  char CommandHardware_Init_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE CommandHardware_Init_CallInstance;
  char CommandHardware_Exec_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE CommandHardware_Exec_CallInstance;
  char CommandHardware_CheckForMsg_IgnoreBool;
  STATUS_T CommandHardware_CheckForMsg_FinalReturn;
  CMOCK_MEM_INDEX_TYPE CommandHardware_CheckForMsg_CallInstance;
  char CommandHardware_SendResponse_IgnoreBool;
  STATUS_T CommandHardware_SendResponse_FinalReturn;
  CMOCK_MEM_INDEX_TYPE CommandHardware_SendResponse_CallInstance;
  char CommandHardware_SendError_IgnoreBool;
  STATUS_T CommandHardware_SendError_FinalReturn;
  CMOCK_MEM_INDEX_TYPE CommandHardware_SendError_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void MockCommandHardware_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.CommandHardware_Init_CallInstance;
  if (Mock.CommandHardware_Init_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_CommandHardware_Init);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.CommandHardware_Exec_CallInstance;
  if (Mock.CommandHardware_Exec_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_CommandHardware_Exec);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.CommandHardware_CheckForMsg_CallInstance;
  if (Mock.CommandHardware_CheckForMsg_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_CommandHardware_CheckForMsg);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.CommandHardware_SendResponse_CallInstance;
  if (Mock.CommandHardware_SendResponse_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_CommandHardware_SendResponse);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.CommandHardware_SendError_CallInstance;
  if (Mock.CommandHardware_SendError_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_CommandHardware_SendError);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void MockCommandHardware_Init(void)
{
  MockCommandHardware_Destroy();
}

void MockCommandHardware_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

void CommandHardware_Init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_CommandHardware_Init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_CommandHardware_Init);
  cmock_call_instance = (CMOCK_CommandHardware_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.CommandHardware_Init_CallInstance);
  Mock.CommandHardware_Init_CallInstance = CMock_Guts_MemNext(Mock.CommandHardware_Init_CallInstance);
  if (Mock.CommandHardware_Init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void CommandHardware_Init_CMockIgnore(void)
{
  Mock.CommandHardware_Init_IgnoreBool = (char)1;
}

void CommandHardware_Init_CMockStopIgnore(void)
{
  Mock.CommandHardware_Init_IgnoreBool = (char)0;
}

void CommandHardware_Init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_Init_CALL_INSTANCE));
  CMOCK_CommandHardware_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_Init_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_Init_CallInstance, cmock_guts_index);
  Mock.CommandHardware_Init_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
}

void CommandHardware_Exec(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_CommandHardware_Exec_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_CommandHardware_Exec);
  cmock_call_instance = (CMOCK_CommandHardware_Exec_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.CommandHardware_Exec_CallInstance);
  Mock.CommandHardware_Exec_CallInstance = CMock_Guts_MemNext(Mock.CommandHardware_Exec_CallInstance);
  if (Mock.CommandHardware_Exec_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void CommandHardware_Exec_CMockIgnore(void)
{
  Mock.CommandHardware_Exec_IgnoreBool = (char)1;
}

void CommandHardware_Exec_CMockStopIgnore(void)
{
  Mock.CommandHardware_Exec_IgnoreBool = (char)0;
}

void CommandHardware_Exec_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_Exec_CALL_INSTANCE));
  CMOCK_CommandHardware_Exec_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_Exec_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_Exec_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_Exec_CallInstance, cmock_guts_index);
  Mock.CommandHardware_Exec_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
}

STATUS_T CommandHardware_CheckForMsg(MESSAGE_T* msg)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_CommandHardware_CheckForMsg);
  cmock_call_instance = (CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.CommandHardware_CheckForMsg_CallInstance);
  Mock.CommandHardware_CheckForMsg_CallInstance = CMock_Guts_MemNext(Mock.CommandHardware_CheckForMsg_CallInstance);
  if (Mock.CommandHardware_CheckForMsg_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.CommandHardware_CheckForMsg_FinalReturn;
    memcpy((void*)(&Mock.CommandHardware_CheckForMsg_FinalReturn), (void*)(&cmock_call_instance->ReturnVal),
         sizeof(STATUS_T[sizeof(cmock_call_instance->ReturnVal) == sizeof(STATUS_T) ? 1 : -1])); /* add STATUS_T to :treat_as_array if this causes an error */
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  {
    UNITY_SET_DETAILS(CMockString_CommandHardware_CheckForMsg,CMockString_msg);
    if (cmock_call_instance->Expected_msg == NULL)
      { UNITY_TEST_ASSERT_NULL(msg, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_msg), (void*)(msg), sizeof(MESSAGE_T), cmock_call_instance->Expected_msg_Depth, cmock_line, CMockStringMismatch); }
  }
  }
  if (cmock_call_instance->ReturnThruPtr_msg_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(msg, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)msg, (void*)cmock_call_instance->ReturnThruPtr_msg_Val,
      cmock_call_instance->ReturnThruPtr_msg_Size);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_CommandHardware_CheckForMsg(CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE* cmock_call_instance, MESSAGE_T* msg, int msg_Depth)
{
  cmock_call_instance->Expected_msg = msg;
  cmock_call_instance->Expected_msg_Depth = msg_Depth;
  cmock_call_instance->ReturnThruPtr_msg_Used = 0;
}

void CommandHardware_CheckForMsg_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE));
  CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_CheckForMsg_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_CheckForMsg_CallInstance, cmock_guts_index);
  Mock.CommandHardware_CheckForMsg_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.CommandHardware_CheckForMsg_IgnoreBool = (char)1;
}

void CommandHardware_CheckForMsg_CMockStopIgnore(void)
{
  if(Mock.CommandHardware_CheckForMsg_IgnoreBool)
    Mock.CommandHardware_CheckForMsg_CallInstance = CMock_Guts_MemNext(Mock.CommandHardware_CheckForMsg_CallInstance);
  Mock.CommandHardware_CheckForMsg_IgnoreBool = (char)0;
}

void CommandHardware_CheckForMsg_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE));
  CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_CheckForMsg_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_CheckForMsg_CallInstance, cmock_guts_index);
  Mock.CommandHardware_CheckForMsg_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void CommandHardware_CheckForMsg_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* msg, STATUS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE));
  CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_CheckForMsg_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_CheckForMsg_CallInstance, cmock_guts_index);
  Mock.CommandHardware_CheckForMsg_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_CommandHardware_CheckForMsg(cmock_call_instance, msg, 1);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(STATUS_T[sizeof(cmock_to_return) == sizeof(STATUS_T) ? 1 : -1])); /* add STATUS_T to :treat_as_array if this causes an error */
}

void CommandHardware_CheckForMsg_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* msg, int msg_Depth, STATUS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE));
  CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_CheckForMsg_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_CheckForMsg_CallInstance, cmock_guts_index);
  Mock.CommandHardware_CheckForMsg_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_CommandHardware_CheckForMsg(cmock_call_instance, msg, msg_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void CommandHardware_CheckForMsg_CMockReturnMemThruPtr_msg(UNITY_LINE_TYPE cmock_line, MESSAGE_T* msg, int cmock_size)
{
  CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_CheckForMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.CommandHardware_CheckForMsg_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_msg_Used = 1;
  cmock_call_instance->ReturnThruPtr_msg_Val = msg;
  cmock_call_instance->ReturnThruPtr_msg_Size = cmock_size;
}

STATUS_T CommandHardware_SendResponse(MESSAGE_T* msg)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_CommandHardware_SendResponse_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_CommandHardware_SendResponse);
  cmock_call_instance = (CMOCK_CommandHardware_SendResponse_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.CommandHardware_SendResponse_CallInstance);
  Mock.CommandHardware_SendResponse_CallInstance = CMock_Guts_MemNext(Mock.CommandHardware_SendResponse_CallInstance);
  if (Mock.CommandHardware_SendResponse_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.CommandHardware_SendResponse_FinalReturn;
    memcpy((void*)(&Mock.CommandHardware_SendResponse_FinalReturn), (void*)(&cmock_call_instance->ReturnVal),
         sizeof(STATUS_T[sizeof(cmock_call_instance->ReturnVal) == sizeof(STATUS_T) ? 1 : -1])); /* add STATUS_T to :treat_as_array if this causes an error */
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  {
    UNITY_SET_DETAILS(CMockString_CommandHardware_SendResponse,CMockString_msg);
    if (cmock_call_instance->Expected_msg == NULL)
      { UNITY_TEST_ASSERT_NULL(msg, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_msg), (void*)(msg), sizeof(MESSAGE_T), cmock_call_instance->Expected_msg_Depth, cmock_line, CMockStringMismatch); }
  }
  }
  if (cmock_call_instance->ReturnThruPtr_msg_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(msg, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)msg, (void*)cmock_call_instance->ReturnThruPtr_msg_Val,
      cmock_call_instance->ReturnThruPtr_msg_Size);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_CommandHardware_SendResponse(CMOCK_CommandHardware_SendResponse_CALL_INSTANCE* cmock_call_instance, MESSAGE_T* msg, int msg_Depth)
{
  cmock_call_instance->Expected_msg = msg;
  cmock_call_instance->Expected_msg_Depth = msg_Depth;
  cmock_call_instance->ReturnThruPtr_msg_Used = 0;
}

void CommandHardware_SendResponse_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_SendResponse_CALL_INSTANCE));
  CMOCK_CommandHardware_SendResponse_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_SendResponse_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_SendResponse_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_SendResponse_CallInstance, cmock_guts_index);
  Mock.CommandHardware_SendResponse_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.CommandHardware_SendResponse_IgnoreBool = (char)1;
}

void CommandHardware_SendResponse_CMockStopIgnore(void)
{
  if(Mock.CommandHardware_SendResponse_IgnoreBool)
    Mock.CommandHardware_SendResponse_CallInstance = CMock_Guts_MemNext(Mock.CommandHardware_SendResponse_CallInstance);
  Mock.CommandHardware_SendResponse_IgnoreBool = (char)0;
}

void CommandHardware_SendResponse_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_SendResponse_CALL_INSTANCE));
  CMOCK_CommandHardware_SendResponse_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_SendResponse_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_SendResponse_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_SendResponse_CallInstance, cmock_guts_index);
  Mock.CommandHardware_SendResponse_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void CommandHardware_SendResponse_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* msg, STATUS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_SendResponse_CALL_INSTANCE));
  CMOCK_CommandHardware_SendResponse_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_SendResponse_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_SendResponse_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_SendResponse_CallInstance, cmock_guts_index);
  Mock.CommandHardware_SendResponse_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_CommandHardware_SendResponse(cmock_call_instance, msg, 1);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(STATUS_T[sizeof(cmock_to_return) == sizeof(STATUS_T) ? 1 : -1])); /* add STATUS_T to :treat_as_array if this causes an error */
}

void CommandHardware_SendResponse_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* msg, int msg_Depth, STATUS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_SendResponse_CALL_INSTANCE));
  CMOCK_CommandHardware_SendResponse_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_SendResponse_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_SendResponse_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_SendResponse_CallInstance, cmock_guts_index);
  Mock.CommandHardware_SendResponse_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_CommandHardware_SendResponse(cmock_call_instance, msg, msg_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void CommandHardware_SendResponse_CMockReturnMemThruPtr_msg(UNITY_LINE_TYPE cmock_line, MESSAGE_T* msg, int cmock_size)
{
  CMOCK_CommandHardware_SendResponse_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_SendResponse_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.CommandHardware_SendResponse_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_msg_Used = 1;
  cmock_call_instance->ReturnThruPtr_msg_Val = msg;
  cmock_call_instance->ReturnThruPtr_msg_Size = cmock_size;
}

STATUS_T CommandHardware_SendError(MESSAGE_T* msg, STATUS_T Error)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_CommandHardware_SendError_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_CommandHardware_SendError);
  cmock_call_instance = (CMOCK_CommandHardware_SendError_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.CommandHardware_SendError_CallInstance);
  Mock.CommandHardware_SendError_CallInstance = CMock_Guts_MemNext(Mock.CommandHardware_SendError_CallInstance);
  if (Mock.CommandHardware_SendError_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.CommandHardware_SendError_FinalReturn;
    memcpy((void*)(&Mock.CommandHardware_SendError_FinalReturn), (void*)(&cmock_call_instance->ReturnVal),
         sizeof(STATUS_T[sizeof(cmock_call_instance->ReturnVal) == sizeof(STATUS_T) ? 1 : -1])); /* add STATUS_T to :treat_as_array if this causes an error */
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  {
    UNITY_SET_DETAILS(CMockString_CommandHardware_SendError,CMockString_msg);
    if (cmock_call_instance->Expected_msg == NULL)
      { UNITY_TEST_ASSERT_NULL(msg, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_msg), (void*)(msg), sizeof(MESSAGE_T), cmock_call_instance->Expected_msg_Depth, cmock_line, CMockStringMismatch); }
  }
  {
    UNITY_SET_DETAILS(CMockString_CommandHardware_SendError,CMockString_Error);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_Error), (void*)(&Error), sizeof(STATUS_T), cmock_line, CMockStringMismatch);
  }
  }
  if (cmock_call_instance->ReturnThruPtr_msg_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(msg, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)msg, (void*)cmock_call_instance->ReturnThruPtr_msg_Val,
      cmock_call_instance->ReturnThruPtr_msg_Size);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_CommandHardware_SendError(CMOCK_CommandHardware_SendError_CALL_INSTANCE* cmock_call_instance, MESSAGE_T* msg, int msg_Depth, STATUS_T Error)
{
  cmock_call_instance->Expected_msg = msg;
  cmock_call_instance->Expected_msg_Depth = msg_Depth;
  cmock_call_instance->ReturnThruPtr_msg_Used = 0;
  memcpy((void*)(&cmock_call_instance->Expected_Error), (void*)(&Error),
         sizeof(STATUS_T[sizeof(Error) == sizeof(STATUS_T) ? 1 : -1])); /* add STATUS_T to :treat_as_array if this causes an error */
}

void CommandHardware_SendError_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_SendError_CALL_INSTANCE));
  CMOCK_CommandHardware_SendError_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_SendError_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_SendError_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_SendError_CallInstance, cmock_guts_index);
  Mock.CommandHardware_SendError_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.CommandHardware_SendError_IgnoreBool = (char)1;
}

void CommandHardware_SendError_CMockStopIgnore(void)
{
  if(Mock.CommandHardware_SendError_IgnoreBool)
    Mock.CommandHardware_SendError_CallInstance = CMock_Guts_MemNext(Mock.CommandHardware_SendError_CallInstance);
  Mock.CommandHardware_SendError_IgnoreBool = (char)0;
}

void CommandHardware_SendError_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_SendError_CALL_INSTANCE));
  CMOCK_CommandHardware_SendError_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_SendError_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_SendError_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_SendError_CallInstance, cmock_guts_index);
  Mock.CommandHardware_SendError_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void CommandHardware_SendError_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* msg, STATUS_T Error, STATUS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_SendError_CALL_INSTANCE));
  CMOCK_CommandHardware_SendError_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_SendError_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_SendError_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_SendError_CallInstance, cmock_guts_index);
  Mock.CommandHardware_SendError_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_CommandHardware_SendError(cmock_call_instance, msg, 1, Error);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(STATUS_T[sizeof(cmock_to_return) == sizeof(STATUS_T) ? 1 : -1])); /* add STATUS_T to :treat_as_array if this causes an error */
}

void CommandHardware_SendError_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* msg, int msg_Depth, STATUS_T Error, STATUS_T cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_CommandHardware_SendError_CALL_INSTANCE));
  CMOCK_CommandHardware_SendError_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_SendError_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.CommandHardware_SendError_CallInstance = CMock_Guts_MemChain(Mock.CommandHardware_SendError_CallInstance, cmock_guts_index);
  Mock.CommandHardware_SendError_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_CommandHardware_SendError(cmock_call_instance, msg, msg_Depth, Error);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void CommandHardware_SendError_CMockReturnMemThruPtr_msg(UNITY_LINE_TYPE cmock_line, MESSAGE_T* msg, int cmock_size)
{
  CMOCK_CommandHardware_SendError_CALL_INSTANCE* cmock_call_instance = (CMOCK_CommandHardware_SendError_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.CommandHardware_SendError_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_msg_Used = 1;
  cmock_call_instance->ReturnThruPtr_msg_Val = msg;
  cmock_call_instance->ReturnThruPtr_msg_Size = cmock_size;
}

