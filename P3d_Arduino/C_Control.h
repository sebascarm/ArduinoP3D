// C_Control.h

#ifndef _C_CONTROL_h
#define _C_CONTROL_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

enum TipoControl { Switch, Pulsador, Llave, PoteAnalogo, PoteDigital, Led, Display };
//Clase Control

class C_Control {
private:
	TipoControl V_Tipo;
	int V_Valor = -1;
	int V_ValorAnt = -1;
	byte V_Chip;
	byte V_Posicion;
	String V_Comando;
	C_Comunicacion V_Comunicacion;
public:
	/// <summary>Constructor de la clase, Tipo de Control (Switch, Pulsador, Llave, PoteAnalogo, PoteDigital)</summary> 
	C_Control(TipoControl Tipo);
	/// <summary>Asignacion de Integrado (Chip individual asignado, Posicion del Chip a leer)</summary> 
	void AsignarChip(byte Chip, byte Posicion);
	/// <summary>Asignacion de Comando via Serie (Comando de envio via serie)</summary> 
	void ComandoSerie(String Comando);
	// Acciones
	/// <summary>Envia el comando por el puerto serie si es necesario</summary> 
	void EnviarComando();


};


#endif

