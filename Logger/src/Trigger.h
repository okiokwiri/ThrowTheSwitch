#ifndef TRIGGER_H
#define TRIGGER_H

typedef enum _TRIGGER_T
{
	TRIGGER_NOW         = 0,
	TRIGGER_BIT_CHANGE  = 1,
	TRIGGER_BIT_STATE   = 2,
	TRIGGER_SEQUENCE    = 3,
	TRIGGER_TIMESTAMP   = 4,
	TRIGGER_MAX        = 5,
	TRIGGER_NONE 		= TRIGGER_MAX
}TRIGGER_T;

void Trigger_Init(void);
TRIGGER_T Trigger_GetStyle(void);
STATUS_T Trigger_OnBitChange(uint8_t MaskToCheck);
STATUS_T Trigger_OnBitState(uint8_t MaskToCheck, uint8_t MaskState);
STATUS_T Trigger_OnSequence( uint8_t MaskToCheck, uint8_t* MaskStates, uint8_t Len);
STATUS_T Trigger_Now(void);
STATUS_T Trigger_OnTimeStamp(uint32_t Timestamp);
#endif // TRIGGER_H
