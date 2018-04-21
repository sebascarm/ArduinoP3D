// C_MultiLed.h

#ifndef _C_MULTILED_h
#define _C_MULTILED_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class C_MultiLed
{
 private:
	 byte V_Chip;
	 byte V_Posicion;
	 String V_Comando;
	 int V_Valor = -1; // Usamos el -1 para identificar cuando no se encuentra el valor
	 int V_ValorAnt = -1;
	 
 public:
	 /// <summary>Constructor de la clase</summary> 
	 C_MultiLed(String Comando, byte Chip, byte Posicion);
	 // Acciones
	 /// <summary>Busca y carga  el comando recibido del Paquete</summary> 
	 void CargarComando(String Paquete);
};



#endif

