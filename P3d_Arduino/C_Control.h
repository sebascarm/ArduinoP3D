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
	C_Comunicacion Comunicacion;
public:
	/// <summary>Constructor de la clase</summary> 
	/// <param name = "Tipo">Tipo de Control (Switch, Pulsador, Llave, PoteAnalogo, PoteDigital)</param>
	C_Control(TipoControl Tipo);
	/// <summary>Asignacion de Integrado</summary> 
	/// <param name = "Chip">Chip individual asignado</param>
	/// <param name = "Posicion">Posicion del Chip a leer</param>
	void AsignarChip(byte Chip, byte Posicion);
	/// <summary>Asignacion de Comando via Serie</summary> 
	/// <param name = "Comando">Comando de envio via Serie</param>
	void ComandoSerie(String Comando);
	// Acciones
	/// <summary>Envia el comando por el puerto serie si es necesario</summary> 
	void EnviarComando();
	/// <summary>Busca y carga  el comando recibido del puerto serie</summary> 
	void CargarComando();

};


#endif

