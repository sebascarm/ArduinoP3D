// 
// 
// 
#include "C_Control.h"
#include "C_Comunicacion.h"
//Constructor de la clase
C_Control::C_Control(TipoControl Tipo) {
	V_Tipo = Tipo;
}
void C_Control::AsignarChip(byte Chip, byte Posicion) {
	V_Chip = Chip;
	V_Posicion = Posicion;
}
void C_Control::ComandoSerie(String Comando) {
	V_Comando = Comando;
}
// Acciones              
void C_Control::EnviarComando() {
	// Cargar Valor desde el chip
	V_Valor = bitRead(V_Chip, V_Posicion);
	switch (V_Tipo) {
		// Enviar SWITCH - Solo cuando los valores son distintos
	case Switch:
		if (V_Valor != V_ValorAnt) {
			Comunicacion.Enviar(V_Comando, V_Valor);
			V_ValorAnt = V_Valor;
		}
		break;
		// Enviar PULSADOR - Solo cuando los valores son distintos y es 1
	case Pulsador:
		if (V_Valor != V_Valor) {
			V_ValorAnt = V_Valor;
			if (V_Valor == 1) {
				Comunicacion.Enviar(V_Comando, V_Valor);
			}
		}
		break;

	default:
		break;
	}
}

