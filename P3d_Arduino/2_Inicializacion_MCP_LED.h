#include "1_Variables_MCP_LED.h"

void Inicializacion_MCP_LED() {

	// ***********************************************************************************
	// ****        DECLARACION DE VARIABLES - LEDS	INDIVIDUALES		              ****
	// ***********************************************************************************

	ledFD1.AsignarChip(GrupoChipLED_MCP.Chip1, 1);
	ledAT.AsignarChip(GrupoChipLED_MCP.Chip1, 2);
	ledN1.AsignarChip(GrupoChipLED_MCP.Chip1, 3);
	ledSPEED.AsignarChip(GrupoChipLED_MCP.Chip1, 4);
	ledVNAV.AsignarChip(GrupoChipLED_MCP.Chip1, 5);
	ledLVLCHG.AsignarChip(GrupoChipLED_MCP.Chip1, 6);
	ledHDGSEL.AsignarChip(GrupoChipLED_MCP.Chip1, 7);
	ledLNAV.AsignarChip(GrupoChipLED_MCP.Chip2, 1);
	ledVORLOC.AsignarChip(GrupoChipLED_MCP.Chip2, 2);
	ledAPP.AsignarChip(GrupoChipLED_MCP.Chip2, 3);
	ledALTHLD.AsignarChip(GrupoChipLED_MCP.Chip2, 4);
	ledVS.AsignarChip(GrupoChipLED_MCP.Chip2, 5);
	ledCMDA.AsignarChip(GrupoChipLED_MCP.Chip2, 6);
	ledCWSA.AsignarChip(GrupoChipLED_MCP.Chip2, 7);
	ledCMDB.AsignarChip(GrupoChipLED_MCP.Chip3, 1);
	ledFD2.AsignarChip(GrupoChipLED_MCP.Chip3, 2);
	ledCWSB.AsignarChip(GrupoChipLED_MCP.Chip3, 3);

	ledFD1.ComandoSerie(">1MCP_LFD1_=");
	ledAT.ComandoSerie(">1MCP_LATAR=");
	ledN1.ComandoSerie(">1MCP_LN1__=");
	ledSPEED.ComandoSerie(">1MCP_LSPEE=");
	ledVNAV.ComandoSerie(">1MCP_LVNAV=");
	ledLVLCHG.ComandoSerie(">1MCP_LLVLC=");
	ledHDGSEL.ComandoSerie(">1MCP_LHDGS=");
	ledLNAV.ComandoSerie(">1MCP_LLNAV=");
	ledVORLOC.ComandoSerie(">1MCP_LVORL=");
	ledAPP.ComandoSerie(">1MCP_LAPP_=");
	ledALTHLD.ComandoSerie(">1MCP_LALTH=");
	ledVS.ComandoSerie(">1MCP_LVS__=");
	ledCMDA.ComandoSerie(">1MCP_LCMDA=");
	ledCWSA.ComandoSerie(">1MCP_LCWSA=");
	ledCMDB.ComandoSerie(">1MCP_LCMDB=");
	ledCWSB.ComandoSerie(">1MCP_LCWSB=");
	ledFD2.ComandoSerie(">1MCP_LFD2_=");

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
