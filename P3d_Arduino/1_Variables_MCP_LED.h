#include "C_GrupoChip.h"
#include "C_Control.h"
#include "C_MultiLed.h"
// 
// ***********************************************************************************
// ****        GRUPOS DE C_ControlEGRADOS LEDS Y ENTRADA DE DATOS                 ****
// ***********************************************************************************
C_GrupoChip GrupoChipLED_MCP;
// ***********************************************************************************
// ****        DECLARACION DE VARIABLES - LEDS	INDIVIDUALES		              ****
// ***********************************************************************************
C_MultiLed ledAT	(">1MCP_LATAR=", GrupoChipLED_MCP.Chip1, 2);
C_MultiLed ledFD1	(">1MCP_LFD1_=", GrupoChipLED_MCP.Chip1, 1);
C_MultiLed ledFD2	(">1MCP_LFD2_=", GrupoChipLED_MCP.Chip3, 2);
// ***********************************************************************************
// ****        DECLARACION DE VARIABLES - VARIABLES DE LEDS DE BOTONES (VALORES)  ****
// ***********************************************************************************
C_MultiLed ledN1		(">1MCP_LN1__=", GrupoChipLED_MCP.Chip1, 3);
C_MultiLed ledSPEED		(">1MCP_LSPEE=", GrupoChipLED_MCP.Chip1, 4);
C_MultiLed ledVNAV		(">1MCP_LVNAV=", GrupoChipLED_MCP.Chip1, 5);
C_MultiLed ledLVLCHG	(">1MCP_LLVLC=", GrupoChipLED_MCP.Chip1, 6);
C_MultiLed ledHDGSEL	(">1MCP_LHDGS=", GrupoChipLED_MCP.Chip1, 7);
C_MultiLed ledLNAV		(">1MCP_LLNAV=", GrupoChipLED_MCP.Chip2, 1);
C_MultiLed ledVORLOC	(">1MCP_LVORL=", GrupoChipLED_MCP.Chip2, 2);
C_MultiLed ledAPP		(">1MCP_LAPP_=", GrupoChipLED_MCP.Chip2, 3);
C_MultiLed ledALTHLD	(">1MCP_LALTH=", GrupoChipLED_MCP.Chip2, 4);
C_MultiLed ledVS		(">1MCP_LVS__=", GrupoChipLED_MCP.Chip2, 5);
C_MultiLed ledCMDA		(">1MCP_LCMDA=", GrupoChipLED_MCP.Chip2, 6);
C_MultiLed ledCWSA		(">1MCP_LCWSA=", GrupoChipLED_MCP.Chip2, 7);
C_MultiLed ledCMDB		(">1MCP_LCMDB=", GrupoChipLED_MCP.Chip3, 1);
C_MultiLed ledCWSB		(">1MCP_LCWSB=", GrupoChipLED_MCP.Chip3, 3);

// ***********************************************************************************
// ****        DECLARACION DE VARIABLES - VARIABLES DE DISPLAYS (VALORES)         ****
// ***********************************************************************************
C_Control DispCOURSE1(Display);
C_Control DispCOURSE2(Display);
C_Control DispIASMACH(Display);
C_Control DispHEADING(Display);
C_Control DispALTITUDE(Display);
C_Control DispVS(Display);