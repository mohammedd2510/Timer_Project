/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Timer.h 
 *  Description:  Contains Timer Application Functions prototypes and macros
 *  
 *********************************************************************************************************************/
#ifndef TIMER_H_
#define TIMER_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "BTN.h"
#include "BUZZ.h"
#include "SEVEN_SEG.h"
#ifndef F_CPU
#define F_CPU 16000000U
#endif
#include <util/delay.h>

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define increment_min 10
#define decrement_min 10

#define  increment_10sec 1
#define  decrement_10sec 1

#define max_min 9
#define max_10sec 5

#define Zero_min 100
#define Zero_10sec 6

#define Count_NEW_60_SEC 6

#define PASSED_MINUTE 0
#define PASSED_TEN_SECONDS 5000UL
#define Timer_Finished -4

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void Timer_App(void);
 
#endif /* TIMER_H_ */

/**********************************************************************************************************************
 *  END OF FILE: Timer.h 
 *********************************************************************************************************************/





