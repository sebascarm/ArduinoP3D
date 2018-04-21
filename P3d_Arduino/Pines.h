#include "Variables_MCP_LED.h"
#include "Variables_MCP_OUT.h"
void Pines() {
	// ***********************************************************************************
	// ****        DECLARACION DE PINES MCP - LEDS (ENTRADA)						  ****
	// ***********************************************************************************

	GrupoChipLED_MCP.Cant_Chips = 26;
	GrupoChipLED_MCP.PinData = 22;
	GrupoChipLED_MCP.PinLatch = 24;
	GrupoChipLED_MCP.PinClock = 26;

	// ***********************************************************************************
	// ****        DECLARACION DE PINES MCP - INTERRUPT (SALIDA)                      ****
	// ***********************************************************************************
	GrupoChipOUT_MCP.Cant_Chips = 3;
	GrupoChipOUT_MCP.PinData = 23;
	GrupoChipOUT_MCP.PinClock = 25;
	GrupoChipOUT_MCP.PinLatch = 27;
}
