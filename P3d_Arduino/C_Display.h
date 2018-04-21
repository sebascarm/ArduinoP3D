// C_Display.h

#ifndef _C_DISPLAY_h
#define _C_DISPLAY_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
enum TipoIntegrado { Tipo1, Tipo2, Tipo3, Tipo4, Tipo5, Tipo6, Tipo7, Tipo8, Tipo9  };
class C_Display
{
 private:
	 String V_Valor;
	 String V_Comando;
	 byte V_Digitos;
	 TipoIntegrado V_TipoChip1; TipoIntegrado V_TipoChip2; TipoIntegrado V_TipoChip3;
	 TipoIntegrado V_TipoChip4; TipoIntegrado V_TipoChip5; TipoIntegrado V_TipoChip6;
	 
 public:
	 C_Display(String Comando, byte Cant_Digitos);
	 byte ChipDigito1; byte ChipDigito2; byte ChipDigito3; 
	 byte ChipDigito4; byte ChipDigito5; byte ChipDigito6;
	 void DigitoTraductor(byte Digito, TipoIntegrado TipoTraductorChip);
	 
	 // Acciones 
	 void CargarComando(String Paquete);
};



#endif

