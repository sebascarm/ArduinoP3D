#include "1_Variables_MCP_OUT.h"

void Inicializacion_MCP_OUT() {

	// ***********************************************************************************
	// ****        DECLARACION DE VARIABLES - VARIABLES DE SWITCH (VALORES)           ****
	// ***********************************************************************************

	SwitchAT.AsignarChip(GrupoChipOUT_MCP.Chip2, 5);
	SwitchFD1.AsignarChip(GrupoChipOUT_MCP.Chip2, 4);
	SwitchDIS.AsignarChip(GrupoChipOUT_MCP.Chip1, 0);
	SwitchFD2.AsignarChip(GrupoChipOUT_MCP.Chip1, 6);

	SwitchAT.ComandoSerie(">SMCP_SATAR=");
	SwitchFD1.ComandoSerie(">SMCP_SFD1_=");
	SwitchDIS.ComandoSerie(">SMCP_SDISE=");
	SwitchFD2.ComandoSerie(">SMCP_SFD2_=");

	// **********************************************************************************
	// ****        DECLARACION DE VARIABLES - VARIABLES DE BOTONES (VALORES)         ****
	// **********************************************************************************

	BotonN1.AsignarChip(GrupoChipOUT_MCP.Chip2, 6);
	BotonSpeed.AsignarChip(GrupoChipOUT_MCP.Chip3, 5);
	BotonVNAV.AsignarChip(GrupoChipOUT_MCP.Chip3, 7);
	BotonLVLCHG.AsignarChip(GrupoChipOUT_MCP.Chip3, 3);
	BotonHDGSEL.AsignarChip(GrupoChipOUT_MCP.Chip2, 7);
	BotonLNAV.AsignarChip(GrupoChipOUT_MCP.Chip2, 3);
	BotonVORLOC.AsignarChip(GrupoChipOUT_MCP.Chip2, 2);
	BotonAPP.AsignarChip(GrupoChipOUT_MCP.Chip2, 1);
	BotonALTHLD.AsignarChip(GrupoChipOUT_MCP.Chip2, 0);
	BotonVS.AsignarChip(GrupoChipOUT_MCP.Chip1, 7);
	BotonCMDA.AsignarChip(GrupoChipOUT_MCP.Chip1, 2);
	BotonCWSA.AsignarChip(GrupoChipOUT_MCP.Chip1, 1);
	BotonCMDB.AsignarChip(GrupoChipOUT_MCP.Chip1, 4);
	BotonCWSB.AsignarChip(GrupoChipOUT_MCP.Chip1, 5);

	BotonN1.ComandoSerie(">SMCP_BN1__=");
	BotonSpeed.ComandoSerie(">SMCP_BSPEE=");
	BotonVNAV.ComandoSerie(">SMCP_BVNAV=");
	BotonLVLCHG.ComandoSerie(">SMCP_BLVLC=");
	BotonHDGSEL.ComandoSerie(">SMCP_BHDGS=");
	BotonLNAV.ComandoSerie(">SMCP_BLNAV=");
	BotonVORLOC.ComandoSerie(">SMCP_BVORL=");
	BotonAPP.ComandoSerie(">SMCP_BAPP_=");
	BotonALTHLD.ComandoSerie(">SMCP_BALTH=");
	BotonVS.ComandoSerie(">SMCP_BVS__=");
	BotonCMDA.ComandoSerie(">SMCP_BCMDA=");
	BotonCWSA.ComandoSerie(">SMCP_BCWSA=");
	BotonCMDB.ComandoSerie(">SMCP_BCMDB=");
	BotonCWSB.ComandoSerie(">SMCP_BCWSB=");

	// **********************************************************************************
	// ****        DECLARACION DE VARIABLES - VARIABLES DE PULSADORES (VALORES)      ****
	// **********************************************************************************

	PulsadorCO.AsignarChip(GrupoChipOUT_MCP.Chip3, 4);
	PulsadorSP.AsignarChip(GrupoChipOUT_MCP.Chip3, 6);
	PulsadorAL.AsignarChip(GrupoChipOUT_MCP.Chip1, 3);

	PulsadorCO.ComandoSerie(">SMCP_PCO__=");
	PulsadorSP.ComandoSerie(">SMCP_PSPEE=");
	PulsadorAL.ComandoSerie(">SMCP_PALTI=");

	// ***********************************************************************************
	// ****        DECLARACION DE VARIABLES - VARIABLES DE POTENCIOMETROS (VALORES)   ****
	// ***********************************************************************************
	PoteCourse1.ComandoSerie(">SMCP_PCOU1=");
	PoteIASMach.ComandoSerie(">SMCP_PIASM=");
	PoteHeading.ComandoSerie(">SMCP_PHEAD=");
	PoteAltitud.ComandoSerie(">SMCP_PALTI=");
	PoteVS.ComandoSerie		(">SMCP_PVERS=");
	PoteCourse2.ComandoSerie(">SMCP_PCOU2=");
}
