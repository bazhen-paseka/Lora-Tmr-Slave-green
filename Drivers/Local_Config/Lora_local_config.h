/**
* \version 1.0
* \author Bazhen Paseka
* \13-July-2022
*************************************************************************************
* \copyright	Bazhen Paseka
* \copyright	Brovary
* \copyright	Ukraine
*************************************************************************************
*/

#ifndef LORA_LOCAL_CONFIG_SM_H_
#define LORA_LOCAL_CONFIG_SM_H_

/*
**************************************************************************
*								INCLUDE FILES
**************************************************************************
*/

/*
**************************************************************************
*								    DEFINES                     
**************************************************************************
*/
	#define 	SOFT_VERSION 		510
	#define 	SLAVE
	#define 	SLAVE_QNT			5
	#define 	SLAVE_NUMBER		1
	#define		ADC_COEFFICIENT		8233	//	for 2R
	//	#define 	LOW_POWER_SLEEP_MODE
	#define 	LOW_POWER_STOP_MODE		//	STOP much better then SLEEP
	#define		MY_DEBUG
/*
**************************************************************************
*								   DATA TYPES
**************************************************************************
*/

/*
**************************************************************************
*								GLOBAL VARIABLES
**************************************************************************
*/

/*
**************************************************************************
*									 MACRO'S                     
**************************************************************************
*/

/*
**************************************************************************
*                              FUNCTION PROTOTYPES
**************************************************************************
*/

/*
**************************************************************************
*                              		  END
**************************************************************************
*/
#endif /* LORA_LOCAL_CONFIG_SM_H_ */
