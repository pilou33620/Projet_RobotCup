/* ###################################################################
 **     Filename    : main.c
 **     Project     : OS_Micro_SER3
 **     Processor   : MC9S08QE128CLK
 **     Version     : Driver 01.12
 **     Compiler    : CodeWarrior HCS08 C Compiler
 **     Date/Time   : 2018-06-12, 14:32, # CodeGen: 0
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
#include "TPM1.h"
#include "PTE.h"
/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
static unsigned short compteur;
unsigned char tache = 1;
ISR(systick) {

	TPM1SC_TOF = 0;
	compteur++;
}

void main(void) {
	/* Write your local variable definition here */
	PTBDD = 0x32;
	/*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
	PE_low_level_init();
	/*** End of Processor Expert internal initialization.                    ***/

	switch (tache) {

	case 1:

		do {
			//Appel de la fonction.
			PTED_PTED5 = 0;
			PTED_PTED6 = 0;

		} while (compteur <= 50); // temps d'execution de la fonction

		do {

			//Appel de la fonction.
			PTED_PTED5 = 1;
			PTED_PTED6 = 1;

		} while (compteur <= 50); // temps d'execution de la fonction 

		if (compteur >= 5) { //test de remise a zero du compteur

			compteur = 0;
		}
		tache++;

		break;

	case 2:
		do {
			//Appel de la fonction.
			PTBD_PTBD5 = 0;
		} while (compteur <= 200); // temps d'execution de la fonction 
		do {
			//Appel de la fonction.
			PTBD_PTBD5 = 1;
		} while (compteur <= 200); // temps d'execution de la fonction 
		if (compteur >= 200) { //test de remise a zero du compteur
			compteur = 0;
		}
		do {
			//Appel de la fonction.
			PTBD_PTBD4 = 0;
		}while (compteur <= 200); // temps d'execution de la fonction 
		do {
			//Appel de la fonction.
			PTBD_PTBD4 = 1;
		} while (compteur <= 200); // temps d'execution de la fonction 
		if (compteur >= 200) { //test de remise a zero du compteur
			compteur = 0;
		}
		do {
			//Appel de la fonction.
			PTBD_PTBD1 = 0;
		} while (compteur <= 200); // temps d'execution de la fonction 
		do {
			//Appel de la fonction.
			PTBD_PTBD1 = 1;
		} while (compteur <= 200); // temps d'execution de la fonction 

		if (compteur >= 200) { //test de remise a zero du compteur

			compteur = 0;
		}
		tache++;
		break;
	case 3:
		PTED_PTED5 = 0;
		PTED_PTED6 = 0;
		tache = 1;
		break;

	default:
		break;

	}

}

/*** Don't write any code pass this line, or it will be deleted during code generation. ***/
/*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
#ifdef PEX_RTOS_START
PEX_RTOS_START(); /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
#endif
/*** End of RTOS startup code.  ***/
/*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/

/*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
/*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

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
