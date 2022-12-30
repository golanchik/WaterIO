#ifndef _CAP_H_
#define _CAP_H_


#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

typedef enum
{
    FINAL_MODE,
    DEBUG_MODE,
}TDeviceMode;



void CAP_WriteResetEvent(void);
int Cap_Start();
int Cap_IsStarted();
void Cap_Stop();

void Cap_OnConnect();
int Cap_OnDisconnect();

int Cap_OnReceive(const unsigned char *data, unsigned short len);
int Cap_Send(const unsigned char *data, unsigned short len); // Should be implemented by caller

int Cap_Process(void);

int Cap_RxEvent(unsigned char byte);
int Cap_TestBoxEvent(void);
int Cap_MagneticSwitchEvent(void);
int Cap_Shock1Event(void);
int Cap_OffLineProcess(void);

int Cap_FillAdv(unsigned char *advData);
void HandleLedsReminder(void);
void CAP_InitMagnetStatus(void);
//void VCNL420_readStatus(void);  
void  CAP_printBDAddress(void);
void CAP_printSamplingPeriod(void);

unsigned char isLogMessagesEnabled(void);
void disableLogMessages(void);

TDeviceMode getDeviceState(void);
uint8_t CAP_SamplingPeriodIsValid(uint16_t a_samplingPeriod);
uint8_t CAP_AdvPeriodInWarehouseModeIsValid(uint8_t a_AdvPeriodInWarehouseMode);
void CAP_calculateAdvPerodInWarehouseMode(void);

void setSamplingPeriod(uint16_t a_SamplingPeriod);
void setPressureOffset(long a_pressureOffset);

void enableDebupPort(void);
unsigned char isDebugPortDisabled();

int handleShockInt1(void);
void CAP_printHwVerssion(void);
void CAP_printBatchNumber(void);
void CAP_printNumOfWarehouseAdv(void);
void CAP_SetWarehousePeriod(uint16_t a_warehosePeriod);

#ifdef __cplusplus
}
#endif

#endif /* _CAP_H_ */
