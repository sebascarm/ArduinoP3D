// C_Comunicacion.h

#ifndef _C_COMUNICACION_h
#define _C_COMUNICACION_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class C_Comunicacion {
private:
	int V_SecuenciaEnvio = 0;
	String ID_Envio();
	String Origen = "A"; // A: Arduino - F: Feudrino
public:
	//Parametros-s
	void SecuenciaEnvio(int Secuencia);
	// Acciones
	void Enviar(String Comando, int Valor = -1);
	void EnviarComentario(String COMANDO, int VALOR = -1);
};


#endif

