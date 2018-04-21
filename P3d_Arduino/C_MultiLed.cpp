// 
// 
// 

#include "C_MultiLed.h"
#include "C_Comunicacion.h"

C_MultiLed::C_MultiLed(String Comando, byte Chip, byte Posicion) {
	V_Comando = Comando;
	V_Chip = Chip;
	V_Posicion = Posicion;
}

// Acciones
void C_MultiLed::CargarComando(String Paquete) {
	//Cargamos el valor si encontramos el comando
	V_Valor = BuscarComandoINT(Paquete, V_Comando);
	// Cargar en el Chip si es distinto a -1
	if (V_Valor != -1) { bitWrite(V_Chip, V_Posicion, V_Valor); }
}



// FUNCIONES INTERNAS //
int BuscarComandoINT(String Texto, String Buscar) {
	int PosicionIni;
	int PosicionFin;
	String SIDEntrada;
	String SF_Resultado = "-1";
	int Resultado = -1;
	PosicionIni = Texto.indexOf(Buscar);
	if (PosicionIni >= 0) {
		PosicionFin = Texto.indexOf("<", PosicionIni);
		if (PosicionFin >= 0) {
			/* Comando encontrado - carga de valor [01]> */
			SF_Resultado = Texto.substring(PosicionIni + 12, PosicionFin);
			// Analizamos el ID
			//SIDEntrada = Texto.substring(PosicionIni - 4, PosicionIni - 1);
			//ControlID(SIDEntrada, Texto, Buscar);
		}
	}
	if (SF_Resultado == "") {
		SF_Resultado = "-1";
	}
	Resultado = SF_Resultado.toInt();
	return Resultado;
}

