#ifndef _CAP_H_
#define _CAP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

//int Cap_OnDisconnect();
int Cap_OffLineProcess(void);
int Cap_FillAdv(unsigned char *advData);
void CAP_Init(void);
uint8_t Cap_mainLoop(void);

// just for now
void Cap_disconnectionEvent (void);
bool getAppPowerState(void);
bool CAP_isActiveMode(void);
bool CAP_isInPairingMode(void);
bool CAP_IsNotificationEnabled(void);
void AllowNotificationsForFT2(void);
#ifdef __cplusplus
}
#endif

#endif /* _CAP_H_ */
