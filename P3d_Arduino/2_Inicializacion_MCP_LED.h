#include "1_Variables_MCP_LED.h"

void Inicializacion_MCP_LED() {

	// ***********************************************************************************
	// ****        DECLARACION DE VARIABLES - LEDS	INDIVIDUALES		              ****
	// ***********************************************************************************

	

	// ***********************************************************************************
	// ****        DECLARACION DE VARIABLES - VARIABLES DE DISPLAYS (VALORES)         ****
	// ***********************************************************************************

	DispCOURSE1.Digitos = 3;
	DispCOURSE1.Chip_Digito1(GrupoChipLED_MCP.Chip4)
	DispCOURSE1.Chip_Digito2(GrupoChipLED_MCP.Chip5)
	DispCOURSE1.Chip_Digito3(GrupoChipLED_MCP.Chip6)
	DispCOURSE1.ComandoSerie(">1MCP_DCOU1=");

	DispHEADING.ComandoSerie(">1MCP_DHEAD=");
	DispIASMACH.ComandoSerie(">1MCP_DIASM=");
	DispALTITUDE.ComandoSerie(">1MCP_DALTI=");
	DispVS.ComandoSerie(">1MCP_DVS__=");
	DispCOURSE2.ComandoSerie(">1MCP_DCOU2=");

}
