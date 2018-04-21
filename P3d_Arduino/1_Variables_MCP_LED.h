#include "C_GrupoChip.h"
#include "C_Control.h"
// 
// ***********************************************************************************
// ****        GRUPOS DE C_ControlEGRADOS LEDS Y ENTRADA DE DATOS                 ****
// ***********************************************************************************
C_GrupoChip GrupoChipLED_MCP;
// ***********************************************************************************
// ****        DECLARACION DE VARIABLES - LEDS	INDIVIDUALES		              ****
// ***********************************************************************************
C_Control ledAT(Led);
C_Control ledFD1(Led);
C_Control ledFD2(Led);
// ***********************************************************************************
// ****        DECLARACION DE VARIABLES - VARIABLES DE LEDS DE BOTONES (VALORES)  ****
// ***********************************************************************************
C_Control ledN1(Led);
C_Control ledSPEED(Led);
C_Control ledLVLCHG(Led);
C_Control ledVNAV(Led);
C_Control ledHDGSEL(Led);
C_Control ledLNAV(Led);
C_Control ledVORLOC(Led);
C_Control ledAPP(Led);
C_Control ledALTHLD(Led);
C_Control ledVS(Led);
C_Control ledCMDA(Led);
C_Control ledCWSA(Led);
C_Control ledCMDB(Led);
C_Control ledCWSB(Led);
// ***********************************************************************************
// ****        DECLARACION DE VARIABLES - VARIABLES DE DISPLAYS (VALORES)         ****
// ***********************************************************************************
C_Control DispCOURSE1(Display);
C_Control DispCOURSE2(Display);
C_Control DispIASMACH(Display);
C_Control DispHEADING(Display);
C_Control DispALTITUDE(Display);
C_Control DispVS(Display);