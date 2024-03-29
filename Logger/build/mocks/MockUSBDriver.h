/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKUSBDRIVER_H
#define _MOCKUSBDRIVER_H

#include "unity.h"
#include "stdint.h"
#include "Defs.h"
#include "LPC1768.h"
#include "USBDriver.h"

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

void MockUSBDriver_Init(void);
void MockUSBDriver_Destroy(void);
void MockUSBDriver_Verify(void);




#define USBDriver_Init_Ignore() USBDriver_Init_CMockIgnore()
void USBDriver_Init_CMockIgnore(void);
#define USBDriver_Init_StopIgnore() USBDriver_Init_CMockStopIgnore()
void USBDriver_Init_CMockStopIgnore(void);
#define USBDriver_Init_Expect() USBDriver_Init_CMockExpect(__LINE__)
void USBDriver_Init_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define USBDriver_Exec_Ignore() USBDriver_Exec_CMockIgnore()
void USBDriver_Exec_CMockIgnore(void);
#define USBDriver_Exec_StopIgnore() USBDriver_Exec_CMockStopIgnore()
void USBDriver_Exec_CMockStopIgnore(void);
#define USBDriver_Exec_Expect() USBDriver_Exec_CMockExpect(__LINE__)
void USBDriver_Exec_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define USBDriver_OkayToRead_IgnoreAndReturn(cmock_retval) USBDriver_OkayToRead_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void USBDriver_OkayToRead_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, BOOL cmock_to_return);
#define USBDriver_OkayToRead_StopIgnore() USBDriver_OkayToRead_CMockStopIgnore()
void USBDriver_OkayToRead_CMockStopIgnore(void);
#define USBDriver_OkayToRead_ExpectAndReturn(cmock_retval) USBDriver_OkayToRead_CMockExpectAndReturn(__LINE__, cmock_retval)
void USBDriver_OkayToRead_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, BOOL cmock_to_return);
#define USBDriver_GetChar_IgnoreAndReturn(cmock_retval) USBDriver_GetChar_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void USBDriver_GetChar_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, char cmock_to_return);
#define USBDriver_GetChar_StopIgnore() USBDriver_GetChar_CMockStopIgnore()
void USBDriver_GetChar_CMockStopIgnore(void);
#define USBDriver_GetChar_ExpectAndReturn(cmock_retval) USBDriver_GetChar_CMockExpectAndReturn(__LINE__, cmock_retval)
void USBDriver_GetChar_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char cmock_to_return);
#define USBDriver_PutChar_IgnoreAndReturn(cmock_retval) USBDriver_PutChar_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void USBDriver_PutChar_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, BOOL cmock_to_return);
#define USBDriver_PutChar_StopIgnore() USBDriver_PutChar_CMockStopIgnore()
void USBDriver_PutChar_CMockStopIgnore(void);
#define USBDriver_PutChar_ExpectAnyArgsAndReturn(cmock_retval) USBDriver_PutChar_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void USBDriver_PutChar_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, BOOL cmock_to_return);
#define USBDriver_PutChar_ExpectAndReturn(data, cmock_retval) USBDriver_PutChar_CMockExpectAndReturn(__LINE__, data, cmock_retval)
void USBDriver_PutChar_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char data, BOOL cmock_to_return);
#define USBDriver_PutChar_IgnoreArg_data() USBDriver_PutChar_CMockIgnoreArg_data(__LINE__)
void USBDriver_PutChar_CMockIgnoreArg_data(UNITY_LINE_TYPE cmock_line);
#define USBDriver_Connected_IgnoreAndReturn(cmock_retval) USBDriver_Connected_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void USBDriver_Connected_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, BOOL cmock_to_return);
#define USBDriver_Connected_StopIgnore() USBDriver_Connected_CMockStopIgnore()
void USBDriver_Connected_CMockStopIgnore(void);
#define USBDriver_Connected_ExpectAndReturn(cmock_retval) USBDriver_Connected_CMockExpectAndReturn(__LINE__, cmock_retval)
void USBDriver_Connected_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, BOOL cmock_to_return);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
