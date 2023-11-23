/*
Pregunta 3
Construir un programa en C++ que dibuje un círculo relleno y este se 
mueva por 
toda la pantalla mediante las teclas: A(izquierda) S(abajo) W(arriba) 
D(derecha), 
sin salirse de la pantalla. (4 puntos)
*/
#include "miniwin.h";
using namespace miniwin;
int VENTANA_ANCHO = 500;
int VENTANA_ALTO = 500;
float RADIO = 20;
void moverCirculo(float &posX, float &posY, int tecla) {
	if (tecla == int('d') || tecla == int('D')) {
		if (posX + RADIO + 5 <= VENTANA_ANCHO) {
		 	posX += 5;
		}
	}
	else if (tecla == int('a') || tecla == int('A')) {
		if (posX - RADIO - 5 >= 0) {
	 		posX -= 5;
	 	}
	}
	else if (tecla == int('s') || tecla == int('S')) {
		if (posY + RADIO + 5 <= VENTANA_ALTO) {
	 		posY += 5;
	 	}
	}
	else if (tecla == int('w') || tecla == int('W')) {
		if (posY - RADIO - 5 >= 0) {
	 		posY -= 5;
	 	}
	}
}
int main(){
	vredimensiona(VENTANA_ANCHO,VENTANA_ALTO);
	int t = tecla();
	float posX=250;
	float posY=250;
	while (t != ESCAPE) {
		moverCirculo(posX, posY,t);
		circulo_lleno(posX, posY,RADIO);
		refresca();
		espera(16);
		borra();
		t = tecla();
	 }
	return 0;
}

