/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKCOMMANDHANDLERS_H
#define _MOCKCOMMANDHANDLERS_H

#include "unity.h"
#include "stdint.h"
#include "Defs.h"
#include "LPC1768.h"
#include "CommandHandlers.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void MockCommandHandlers_Init(void);
void MockCommandHandlers_Destroy(void);
void MockCommandHandlers_Verify(void);




#define CommandHandlers_Init_Ignore() CommandHandlers_Init_CMockIgnore()
void CommandHandlers_Init_CMockIgnore(void);
#define CommandHandlers_Init_StopIgnore() CommandHandlers_Init_CMockStopIgnore()
void CommandHandlers_Init_CMockStopIgnore(void);
#define CommandHandlers_Init_Expect() CommandHandlers_Init_CMockExpect(__LINE__)
void CommandHandlers_Init_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define CommandHandlerVersion_IgnoreAndReturn(cmock_retval) CommandHandlerVersion_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void CommandHandlerVersion_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return);
#define CommandHandlerVersion_StopIgnore() CommandHandlerVersion_CMockStopIgnore()
void CommandHandlerVersion_CMockStopIgnore(void);
#define CommandHandlerVersion_ExpectAnyArgsAndReturn(cmock_retval) CommandHandlerVersion_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void CommandHandlerVersion_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return);
#define CommandHandlerVersion_ExpectAndReturn(Msg, cmock_retval) CommandHandlerVersion_CMockExpectAndReturn(__LINE__, Msg, cmock_retval)
void CommandHandlerVersion_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, STATUS_T cmock_to_return);
#define CommandHandlerVersion_ExpectWithArrayAndReturn(Msg, Msg_Depth, cmock_retval) CommandHandlerVersion_CMockExpectWithArrayAndReturn(__LINE__, Msg, Msg_Depth, cmock_retval)
void CommandHandlerVersion_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, int Msg_Depth, STATUS_T cmock_to_return);
#define CommandHandlerVersion_ReturnThruPtr_Msg(Msg) CommandHandlerVersion_CMockReturnMemThruPtr_Msg(__LINE__, Msg, sizeof(MESSAGE_T))
#define CommandHandlerVersion_ReturnArrayThruPtr_Msg(Msg, cmock_len) CommandHandlerVersion_CMockReturnMemThruPtr_Msg(__LINE__, Msg, (int)(cmock_len * (int)sizeof(*Msg)))
#define CommandHandlerVersion_ReturnMemThruPtr_Msg(Msg, cmock_size) CommandHandlerVersion_CMockReturnMemThruPtr_Msg(__LINE__, Msg, cmock_size)
void CommandHandlerVersion_CMockReturnMemThruPtr_Msg(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, int cmock_size);
#define CommandHandlerVersion_IgnoreArg_Msg() CommandHandlerVersion_CMockIgnoreArg_Msg(__LINE__)
void CommandHandlerVersion_CMockIgnoreArg_Msg(UNITY_LINE_TYPE cmock_line);
#define CommandHandlerClock_IgnoreAndReturn(cmock_retval) CommandHandlerClock_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void CommandHandlerClock_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return);
#define CommandHandlerClock_StopIgnore() CommandHandlerClock_CMockStopIgnore()
void CommandHandlerClock_CMockStopIgnore(void);
#define CommandHandlerClock_ExpectAnyArgsAndReturn(cmock_retval) CommandHandlerClock_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void CommandHandlerClock_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return);
#define CommandHandlerClock_ExpectAndReturn(Msg, cmock_retval) CommandHandlerClock_CMockExpectAndReturn(__LINE__, Msg, cmock_retval)
void CommandHandlerClock_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, STATUS_T cmock_to_return);
#define CommandHandlerClock_ExpectWithArrayAndReturn(Msg, Msg_Depth, cmock_retval) CommandHandlerClock_CMockExpectWithArrayAndReturn(__LINE__, Msg, Msg_Depth, cmock_retval)
void CommandHandlerClock_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, int Msg_Depth, STATUS_T cmock_to_return);
#define CommandHandlerClock_ReturnThruPtr_Msg(Msg) CommandHandlerClock_CMockReturnMemThruPtr_Msg(__LINE__, Msg, sizeof(MESSAGE_T))
#define CommandHandlerClock_ReturnArrayThruPtr_Msg(Msg, cmock_len) CommandHandlerClock_CMockReturnMemThruPtr_Msg(__LINE__, Msg, (int)(cmock_len * (int)sizeof(*Msg)))
#define CommandHandlerClock_ReturnMemThruPtr_Msg(Msg, cmock_size) CommandHandlerClock_CMockReturnMemThruPtr_Msg(__LINE__, Msg, cmock_size)
void CommandHandlerClock_CMockReturnMemThruPtr_Msg(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, int cmock_size);
#define CommandHandlerClock_IgnoreArg_Msg() CommandHandlerClock_CMockIgnoreArg_Msg(__LINE__)
void CommandHandlerClock_CMockIgnoreArg_Msg(UNITY_LINE_TYPE cmock_line);
#define CommandHandlerResults_IgnoreAndReturn(cmock_retval) CommandHandlerResults_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void CommandHandlerResults_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return);
#define CommandHandlerResults_StopIgnore() CommandHandlerResults_CMockStopIgnore()
void CommandHandlerResults_CMockStopIgnore(void);
#define CommandHandlerResults_ExpectAnyArgsAndReturn(cmock_retval) CommandHandlerResults_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void CommandHandlerResults_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return);
#define CommandHandlerResults_ExpectAndReturn(Msg, cmock_retval) CommandHandlerResults_CMockExpectAndReturn(__LINE__, Msg, cmock_retval)
void CommandHandlerResults_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, STATUS_T cmock_to_return);
#define CommandHandlerResults_ExpectWithArrayAndReturn(Msg, Msg_Depth, cmock_retval) CommandHandlerResults_CMockExpectWithArrayAndReturn(__LINE__, Msg, Msg_Depth, cmock_retval)
void CommandHandlerResults_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, int Msg_Depth, STATUS_T cmock_to_return);
#define CommandHandlerResults_ReturnThruPtr_Msg(Msg) CommandHandlerResults_CMockReturnMemThruPtr_Msg(__LINE__, Msg, sizeof(MESSAGE_T))
#define CommandHandlerResults_ReturnArrayThruPtr_Msg(Msg, cmock_len) CommandHandlerResults_CMockReturnMemThruPtr_Msg(__LINE__, Msg, (int)(cmock_len * (int)sizeof(*Msg)))
#define CommandHandlerResults_ReturnMemThruPtr_Msg(Msg, cmock_size) CommandHandlerResults_CMockReturnMemThruPtr_Msg(__LINE__, Msg, cmock_size)
void CommandHandlerResults_CMockReturnMemThruPtr_Msg(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, int cmock_size);
#define CommandHandlerResults_IgnoreArg_Msg() CommandHandlerResults_CMockIgnoreArg_Msg(__LINE__)
void CommandHandlerResults_CMockIgnoreArg_Msg(UNITY_LINE_TYPE cmock_line);
#define CommandHandlerArm_IgnoreAndReturn(cmock_retval) CommandHandlerArm_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void CommandHandlerArm_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return);
#define CommandHandlerArm_StopIgnore() CommandHandlerArm_CMockStopIgnore()
void CommandHandlerArm_CMockStopIgnore(void);
#define CommandHandlerArm_ExpectAnyArgsAndReturn(cmock_retval) CommandHandlerArm_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void CommandHandlerArm_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return);
#define CommandHandlerArm_ExpectAndReturn(Msg, cmock_retval) CommandHandlerArm_CMockExpectAndReturn(__LINE__, Msg, cmock_retval)
void CommandHandlerArm_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, STATUS_T cmock_to_return);
#define CommandHandlerArm_ExpectWithArrayAndReturn(Msg, Msg_Depth, cmock_retval) CommandHandlerArm_CMockExpectWithArrayAndReturn(__LINE__, Msg, Msg_Depth, cmock_retval)
void CommandHandlerArm_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, int Msg_Depth, STATUS_T cmock_to_return);
#define CommandHandlerArm_ReturnThruPtr_Msg(Msg) CommandHandlerArm_CMockReturnMemThruPtr_Msg(__LINE__, Msg, sizeof(MESSAGE_T))
#define CommandHandlerArm_ReturnArrayThruPtr_Msg(Msg, cmock_len) CommandHandlerArm_CMockReturnMemThruPtr_Msg(__LINE__, Msg, (int)(cmock_len * (int)sizeof(*Msg)))
#define CommandHandlerArm_ReturnMemThruPtr_Msg(Msg, cmock_size) CommandHandlerArm_CMockReturnMemThruPtr_Msg(__LINE__, Msg, cmock_size)
void CommandHandlerArm_CMockReturnMemThruPtr_Msg(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, int cmock_size);
#define CommandHandlerArm_IgnoreArg_Msg() CommandHandlerArm_CMockIgnoreArg_Msg(__LINE__)
void CommandHandlerArm_CMockIgnoreArg_Msg(UNITY_LINE_TYPE cmock_line);
#define CommandHandlerTrigger_IgnoreAndReturn(cmock_retval) CommandHandlerTrigger_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void CommandHandlerTrigger_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return);
#define CommandHandlerTrigger_StopIgnore() CommandHandlerTrigger_CMockStopIgnore()
void CommandHandlerTrigger_CMockStopIgnore(void);
#define CommandHandlerTrigger_ExpectAnyArgsAndReturn(cmock_retval) CommandHandlerTrigger_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void CommandHandlerTrigger_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, STATUS_T cmock_to_return);
#define CommandHandlerTrigger_ExpectAndReturn(Msg, cmock_retval) CommandHandlerTrigger_CMockExpectAndReturn(__LINE__, Msg, cmock_retval)
void CommandHandlerTrigger_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, STATUS_T cmock_to_return);
#define CommandHandlerTrigger_ExpectWithArrayAndReturn(Msg, Msg_Depth, cmock_retval) CommandHandlerTrigger_CMockExpectWithArrayAndReturn(__LINE__, Msg, Msg_Depth, cmock_retval)
void CommandHandlerTrigger_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, int Msg_Depth, STATUS_T cmock_to_return);
#define CommandHandlerTrigger_ReturnThruPtr_Msg(Msg) CommandHandlerTrigger_CMockReturnMemThruPtr_Msg(__LINE__, Msg, sizeof(MESSAGE_T))
#define CommandHandlerTrigger_ReturnArrayThruPtr_Msg(Msg, cmock_len) CommandHandlerTrigger_CMockReturnMemThruPtr_Msg(__LINE__, Msg, (int)(cmock_len * (int)sizeof(*Msg)))
#define CommandHandlerTrigger_ReturnMemThruPtr_Msg(Msg, cmock_size) CommandHandlerTrigger_CMockReturnMemThruPtr_Msg(__LINE__, Msg, cmock_size)
void CommandHandlerTrigger_CMockReturnMemThruPtr_Msg(UNITY_LINE_TYPE cmock_line, MESSAGE_T* Msg, int cmock_size);
#define CommandHandlerTrigger_IgnoreArg_Msg() CommandHandlerTrigger_CMockIgnoreArg_Msg(__LINE__)
void CommandHandlerTrigger_CMockIgnoreArg_Msg(UNITY_LINE_TYPE cmock_line);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif