/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : PTE.h
**     Project     : OS_Micro_SER3
**     Processor   : MC9S08QE128CLK
**     Component   : Init_GPIO
**     Version     : Component 01.032, Driver 01.21, CPU db: 3.00.067
**     Compiler    : CodeWarrior HCS08 C Compiler
**     Date/Time   : 2018-06-13, 10:59, # CodeGen: 3
**     Abstract    :
**          This file implements the General Purpose Input Output (PTE)
**          module initialization according to the Peripheral Initialization
**          Component settings, and defines interrupt service routines prototypes.
**
**     Settings    :
**          Component name                                 : PTE
**          Device                                         : PTE
**          Port control                                   : Individual pins
**
**          Used pins                                      :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       5             |  PTE5
**                       6             |  PTE6
**             ----------------------------------------------------
**
**          Pin5                                           : PTE5
**            Direction                                    : Output
**            Output value                                 : 0
**            Pull resistor                                : no initialization
**            Open drain                                   : push-pull
**
**          Pin6                                           : PTE6
**            Direction                                    : Output
**            Output value                                 : 0
**            Pull resistor                                : no initialization
**            Open drain                                   : push-pull
**
**          Call Init method                               : yes
**     Contents    :
**         Init - void PTE_Init(void);
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file PTE.h
** @version 01.21
** @brief
**          This file implements the General Purpose Input Output (PTE)
**          module initialization according to the Peripheral Initialization
**          Component settings, and defines interrupt service routines prototypes.
**
*/         
/*!
**  @addtogroup PTE_module PTE module documentation
**  @{
*/         

#ifndef __PTE
#define __PTE

/* MODULE PTE. */

/*Include shared modules, which are used for whole project*/
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited components */

#include "Cpu.h"


void PTE_Init(void);
/*
** ===================================================================
**     Method      :  PTE_Init (component Init_GPIO)
**     Description :
**         This method initializes registers of the GPIO module
**         according to this Peripheral Initialization Component settings.
**         Call this method in the user code to initialize the
**         module. By default, the method is called by PE
**         automatically; see "Call Init method" property of the
**         component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

/* END PTE. */
#endif /* ifndef __PTE */
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
