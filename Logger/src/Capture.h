#ifndef CAPTURE_H
#define CAPTURE_H
#include "Defs.h"
#include "Buffer.h"
BUFFER_T	CaptureBuffer;
STATUS_T Capture_GetResult(uint8_t* buffer, uint8_t* len, uint8_t maxLen);
STATUS_T Capture_Reset(void);
void Capture_Exec();
#endif // CAPTURE_H
