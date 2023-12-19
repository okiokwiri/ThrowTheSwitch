/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "MockPacker.h"

static const char* CMockString_Cmd = "Cmd";
static const char* CMockString_Data = "Data";
static const char* CMockString_Len = "Len";
static const char* CMockString_Packer_AddMsg = "Packer_AddMsg";

typedef struct _CMOCK_Packer_AddMsg_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  char* ReturnVal;
  char Expected_Cmd;
  char* Expected_Data;
  uint8_t Expected_Len;
  char ReturnThruPtr_Data_Used;
  char* ReturnThruPtr_Data_Val;
  int ReturnThruPtr_Data_Size;
  char IgnoreArg_Cmd;
  char IgnoreArg_Data;
  char IgnoreArg_Len;

} CMOCK_Packer_AddMsg_CALL_INSTANCE;

static struct MockPackerInstance
{
  char Packer_AddMsg_IgnoreBool;
  char* Packer_AddMsg_FinalReturn;
  CMOCK_MEM_INDEX_TYPE Packer_AddMsg_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void MockPacker_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.Packer_AddMsg_CallInstance;
  if (Mock.Packer_AddMsg_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Packer_AddMsg);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void MockPacker_Init(void)
{
  MockPacker_Destroy();
}

void MockPacker_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

char* Packer_AddMsg(char Cmd, char* Data, uint8_t Len)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Packer_AddMsg_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Packer_AddMsg);
  cmock_call_instance = (CMOCK_Packer_AddMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Packer_AddMsg_CallInstance);
  Mock.Packer_AddMsg_CallInstance = CMock_Guts_MemNext(Mock.Packer_AddMsg_CallInstance);
  if (Mock.Packer_AddMsg_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.Packer_AddMsg_FinalReturn;
    Mock.Packer_AddMsg_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_Cmd)
  {
    UNITY_SET_DETAILS(CMockString_Packer_AddMsg,CMockString_Cmd);
    UNITY_TEST_ASSERT_EQUAL_INT8(cmock_call_instance->Expected_Cmd, Cmd, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_Data)
  {
    UNITY_SET_DETAILS(CMockString_Packer_AddMsg,CMockString_Data);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_Data, Data, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_Len)
  {
    UNITY_SET_DETAILS(CMockString_Packer_AddMsg,CMockString_Len);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_Len, Len, cmock_line, CMockStringMismatch);
  }
  }
  if (cmock_call_instance->ReturnThruPtr_Data_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(Data, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)Data, (void*)cmock_call_instance->ReturnThruPtr_Data_Val,
      cmock_call_instance->ReturnThruPtr_Data_Size);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_Packer_AddMsg(CMOCK_Packer_AddMsg_CALL_INSTANCE* cmock_call_instance, char Cmd, char* Data, uint8_t Len)
{
  cmock_call_instance->Expected_Cmd = Cmd;
  cmock_call_instance->IgnoreArg_Cmd = 0;
  cmock_call_instance->Expected_Data = Data;
  cmock_call_instance->IgnoreArg_Data = 0;
  cmock_call_instance->ReturnThruPtr_Data_Used = 0;
  cmock_call_instance->Expected_Len = Len;
  cmock_call_instance->IgnoreArg_Len = 0;
}

void Packer_AddMsg_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Packer_AddMsg_CALL_INSTANCE));
  CMOCK_Packer_AddMsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_Packer_AddMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Packer_AddMsg_CallInstance = CMock_Guts_MemChain(Mock.Packer_AddMsg_CallInstance, cmock_guts_index);
  Mock.Packer_AddMsg_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Packer_AddMsg_IgnoreBool = (char)1;
}

void Packer_AddMsg_CMockStopIgnore(void)
{
  if(Mock.Packer_AddMsg_IgnoreBool)
    Mock.Packer_AddMsg_CallInstance = CMock_Guts_MemNext(Mock.Packer_AddMsg_CallInstance);
  Mock.Packer_AddMsg_IgnoreBool = (char)0;
}

void Packer_AddMsg_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Packer_AddMsg_CALL_INSTANCE));
  CMOCK_Packer_AddMsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_Packer_AddMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Packer_AddMsg_CallInstance = CMock_Guts_MemChain(Mock.Packer_AddMsg_CallInstance, cmock_guts_index);
  Mock.Packer_AddMsg_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void Packer_AddMsg_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char Cmd, char* Data, uint8_t Len, char* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Packer_AddMsg_CALL_INSTANCE));
  CMOCK_Packer_AddMsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_Packer_AddMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Packer_AddMsg_CallInstance = CMock_Guts_MemChain(Mock.Packer_AddMsg_CallInstance, cmock_guts_index);
  Mock.Packer_AddMsg_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_Packer_AddMsg(cmock_call_instance, Cmd, Data, Len);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void Packer_AddMsg_CMockReturnMemThruPtr_Data(UNITY_LINE_TYPE cmock_line, char* Data, int cmock_size)
{
  CMOCK_Packer_AddMsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_Packer_AddMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Packer_AddMsg_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_Data_Used = 1;
  cmock_call_instance->ReturnThruPtr_Data_Val = Data;
  cmock_call_instance->ReturnThruPtr_Data_Size = cmock_size;
}

void Packer_AddMsg_CMockIgnoreArg_Cmd(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_Packer_AddMsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_Packer_AddMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Packer_AddMsg_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_Cmd = 1;
}

void Packer_AddMsg_CMockIgnoreArg_Data(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_Packer_AddMsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_Packer_AddMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Packer_AddMsg_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_Data = 1;
}

void Packer_AddMsg_CMockIgnoreArg_Len(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_Packer_AddMsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_Packer_AddMsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Packer_AddMsg_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_Len = 1;
}
