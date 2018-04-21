#include "C_GrupoChip.h"
#include "C_Control.h"

// ***********************************************************************************
// ****        GRUPOS DE INTEGRADOS LEDS Y ENTRADA DE DATOS                       ****
// ***********************************************************************************

C_GrupoChip GrupoChipOUT_MCP;

// ***********************************************************************************
// ****        DECLARACION DE VARIABLES - VARIABLES DE SWITCH (VALORES)           ****
// ***********************************************************************************
C_Control SwitchAT(Switch);
C_Control SwitchFD1(Switch);
C_Control SwitchDIS(Switch);
C_Control SwitchFD2(Switch);
// **********************************************************************************
// ****        DECLARACION DE VARIABLES - VARIABLES DE BOTONES (VALORES)         ****
// **********************************************************************************
C_Control BotonN1(Pulsador);
C_Control BotonSpeed(Pulsador);
C_Control BotonVNAV(Pulsador);
C_Control BotonLVLCHG(Pulsador);
C_Control BotonHDGSEL(Pulsador);
C_Control BotonLNAV(Pulsador);
C_Control BotonVORLOC(Pulsador);
C_Control BotonAPP(Pulsador);
C_Control BotonALTHLD(Pulsador);
C_Control BotonVS(Pulsador);
C_Control BotonCMDA(Pulsador);
C_Control BotonCWSA(Pulsador);
C_Control BotonCMDB(Pulsador);
C_Control BotonCWSB(Pulsador);
// **********************************************************************************
// ****        DECLARACION DE VARIABLES - VARIABLES DE PULSADORES (VALORES)      ****
// **********************************************************************************
C_Control PulsadorCO(Pulsador);
C_Control PulsadorSP(Pulsador);
C_Control PulsadorAL(Pulsador);
// ***********************************************************************************
// ****        DECLARACION DE VARIABLES - VARIABLES DE POTENCIOMETROS (VALORES)   ****
// ***********************************************************************************
C_Control PoteCourse1(PoteAnalogo);
C_Control PoteIASMach(PoteAnalogo);
C_Control PoteHeading(PoteAnalogo);
C_Control PoteAltitud(PoteAnalogo);
C_Control PoteVS(PoteAnalogo);
C_Control PoteCourse2(PoteAnalogo);
