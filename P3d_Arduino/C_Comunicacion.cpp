// 
// 
// 

#include "C_Comunicacion.h"

#include "C_Comunicacion.h"

//Parametros
void C_Comunicacion::SecuenciaEnvio(int Secuencia) {
	V_SecuenciaEnvio = Secuencia;
}
//Acciones
void C_Comunicacion::Enviar(String Comando, int Valor = -1) {
	Serial.print(ID_Envio()); /* 1 Servidor /* 2 Placa --- */
	Serial.print(Comando);
	if (Valor != -1) {
		Serial.print(Valor);
	}
	Serial.print("<");
}
void C_Comunicacion::EnviarComentario(String Comando, int Valor = -1) {
	String Mensaje;
	if (Valor != -1) {
		Mensaje = "{" + Comando + String(Valor) + "}";
	}
	else {
		Mensaje = "{" + Comando + "}";
	}
	Serial.print(Mensaje);
}

// Funciones internas
String C_Comunicacion::ID_Envio() {
	String ID_String;
	V_SecuenciaEnvio = V_SecuenciaEnvio + 1;
	if (V_SecuenciaEnvio == 100) {
		V_SecuenciaEnvio = 0;
	}
	if (V_SecuenciaEnvio < 10) {
		ID_String = "0" + String(V_SecuenciaEnvio);
	}
	else {
		ID_String = String(V_SecuenciaEnvio);
	}
	return "[" + Origen + ID_String + "]";
}
