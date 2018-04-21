// 
// 
// 

#include "C_Display.h"

C_Display::C_Display(String Comando, byte Cant_Digitos) {
	V_Comando = Comando;
	V_Digitos = Cant_Digitos;
}
void C_Display::DigitoTraductor(byte Digito, TipoIntegrado TipoChipTraductor) {
	switch (Digito) {
		case 1:
			V_TipoChip1 = TipoChipTraductor; break;
		case 2:
			V_TipoChip2 = TipoChipTraductor; break;
		case 3:
			V_TipoChip3 = TipoChipTraductor; break;
		case 4:
			V_TipoChip4 = TipoChipTraductor; break;
		case 5:
			V_TipoChip5 = TipoChipTraductor; break;
		case 6:
			V_TipoChip6 = TipoChipTraductor; break;
	}
}

void C_Display::CargarComando(String Paquete) {
	//Cargamos el valor si encontramos el comando
	V_Valor = BuscarComandoSTR(Paquete, V_Comando);

	if (V_Valor != "-1") {
		//Poner en 0 los digitos vacios
		for (int i = V_Valor.length(); i < V_Digitos; i++) { V_Valor = "0" + V_Valor; }
		
		for (int i = V_Digitos; i > 0; i--) {
			switch (i) {
			case 3:
				ChipDigito3 /
			case 2:

			}
		}
		ChipDigito3 = 
		//ImprimirCourse1(DispCOURSE1); 
	}
}



// FUNCIONES INTERNAS
String BuscarComandoSTR(String Texto, String Buscar) { //SOLO UN COMANDO A LA VEZ ESTA RECIBIENDO
	int PosicionIni;
	int PosicionFin;
	String SIDEntrada;
	String SF_Resultado = "-1";
	PosicionIni = Texto.indexOf(Buscar);
	if (PosicionIni >= 0) {
		PosicionFin = Texto.indexOf("<", PosicionIni);
		if (PosicionFin >= 0) {
			// Comando encontrado - carga de valor [01]>
			SF_Resultado = Texto.substring(PosicionIni + 12, PosicionFin);
			//
			//SIDEntrada = Texto.substring(PosicionIni - 4, PosicionIni - 1);
			//ControlID(SIDEntrada, Texto, Buscar);
		}
	}
	if (SF_Resultado == "") {
		SF_Resultado = "-1";
	}
	return SF_Resultado;
}


