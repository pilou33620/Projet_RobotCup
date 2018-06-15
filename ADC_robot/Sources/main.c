/* ###################################################################
 **     Filename    : main.c
 **     Project     : ADC_robot
 **     Processor   : MC9S08QE128CLK
 **     Version     : Driver 01.12
 **     Compiler    : CodeWarrior HCS08 C Compiler
 **     Date/Time   : 2018-06-13, 11:46, # CodeGen: 0
 **     Abstract    :
 **         Main module.
 **         This module contains user's application code.
 **     Settings    :
 **     Contents    :
 **         No public methods
 **
 ** ###################################################################*/
/*!
 ** @file main.c
 ** @version 01.12
 ** @brief
 **         Main module.
 **         This module contains user's application code.
 */
/*!
 **  @addtogroup main_module main module documentation
 **  @{
 */
/* MODULE main */

/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "EInt1.h"
#include "can.h"
/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

#define bat 0x0B
unsigned char *toto = "55";
void ADC_init(void) {
	ADCCFG_ADICLK = 0x00;//fréquence d'echantillonage
	ADCCFG_ADIV = 0x06;//fréquence d'echantillonage = Fbus/8
	ADCSC1_ADCO = 0x01;//activation du ADC
	return;
}
char ADC(char channel) {
	ADCSC1_ADCH = channel;
	while (!ADCSC1_COCO)
		;
	return ADCRL;
}


void main(void) {

	char val_bat;
	
	PE_low_level_init();

	for (;;) {

		val_bat = ADC(bat);//récupere la valeur de l'adc 
		val_bat =((val_bat*100)/255);//convertie la valeur
	}

	/*** Don't write any code pass this line, or it will be deleted during code generation. ***/
	/*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
#ifdef PEX_RTOS_START
	PEX_RTOS_START(); /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
#endif
	/*** End of RTOS startup code.  ***/
	/*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
	for (;;) {
	}
	/*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
 ** @}
 */
/*
 ** ###################################################################
 **
 **     This file was created by Processor Expert 10.3 [05.09]
 **     for the Freescale HCS08 series of microcontrollers.
 **
 ** ###################################################################
 */
