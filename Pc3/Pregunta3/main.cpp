/*
Crear un contador del 100 al 0 usando el sistema de numeración de la película 
"Depredador" (4 puntos)
*/
#include "miniwin.h"
#include <cstdlib>
#include <sstream>
using namespace std;
using namespace miniwin;
// Constantes
const int GROSOR = 20;
const int POS_Y = 100;

void cero(int despl){
	// ancho: 180 - alto: 222
	for(int i = 0; i < GROSOR; i++){
		// |
		linea( 80 + despl + i, POS_Y, 80 + despl + i, POS_Y + 60);
		// - (izquierda)
		linea( 0 + despl, POS_Y + 40 + i, 70 + despl,POS_Y + 40 + i);
		// - (derecha)
		linea(110 + despl, POS_Y + 40 + i,180 + despl,POS_Y + 40 + i);
		// diagonal (izquierda superior)
		linea( 0 + despl + i, POS_Y + 140, 50 + despl + i, POS_Y + 62);
		// diagonal (derecha superior)
		linea(110 + despl + i, POS_Y + 62, 160 + despl + i, POS_Y + 140);
		// diagonal (derecha inferior)
		linea(110 + despl + i, POS_Y + 222, 160 + despl + i, POS_Y + 144);
		// diagonal (izquierda inferior)
		linea( 0 + despl + i, POS_Y + 144, 50 + despl + i, POS_Y + 222);
	}
}

void uno(int despl){
	// ancho: 180 - alto: 140
	for(int i = 0; i < GROSOR; i++){
		// |
		linea( 80 + despl + i, POS_Y, 80 + despl + i, POS_Y + 60);
		// - (izquierda)
		linea( 0 + despl, POS_Y + 40 + i, 70 + despl,POS_Y + 40 + i);
		// - (derecha)
		linea(110 + despl, POS_Y + 40 + i,180 + despl,POS_Y + 40 + i);
		// diagonal (izquierda superior)
		linea( 0 + despl + i, POS_Y + 140, 50 + despl + i, POS_Y + 62);
	}
}

void dos(int despl){
	// ancho: 180 - alto: 222
	for(int i = 0; i < GROSOR; i++){
		// |
		linea( 80 + despl + i, POS_Y, 80 + despl + i, POS_Y + 60);
		// - (izquierda)
		linea( 0 + despl, POS_Y + 40 + i, 70 + despl,POS_Y + 40 + i);
		// - (derecha)
		linea(110 + despl, POS_Y + 40 + i,180 + despl,POS_Y + 40 + i);
		// diagonal (izquierda superior)
		linea( 0 + despl + i, POS_Y + 140, 50 + despl + i, POS_Y + 62);
		// diagonal (derecha superior)
		linea(110 + despl + i, POS_Y + 62, 160 + despl + i, POS_Y + 140);
		// diagonal (izquierda inferior)
		linea( 0 + despl + i, POS_Y + 144, 50 + despl + i, POS_Y + 222);
	}
}

void tres(int despl){
	// ancho: 180 - alto: 222
	for(int i = 0; i < GROSOR; i++){
		// - (derecha)
		linea(110 + despl, POS_Y + 40 + i,180 + despl,POS_Y + 40 + i);
		// diagonal (izquierda inferior)
		linea( 0 + despl + i, POS_Y + 144, 50 + despl + i, POS_Y + 222);
	}
}

void cuatro(int despl){
	// ancho: 180 - alto: 222
	for(int i = 0; i < GROSOR; i++){
		// - (derecha)
		linea(110 + despl, POS_Y + 40 + i,180 + despl,POS_Y + 40 + i);
		// diagonal (izquierda superior)
		linea( 0 + despl + i, POS_Y + 140, 50 + despl + i, POS_Y + 62);
		// diagonal (derecha superior)
		linea(110 + despl + i, POS_Y + 62, 160 + despl + i, POS_Y + 140);
		// diagonal (izquierda inferior)
		linea( 0 + despl + i, POS_Y + 144, 50 + despl + i, POS_Y + 222);
	}
}

void cinco(int despl){
	// ancho: 180 - alto: 222
	for(int i = 0; i < GROSOR; i++){
		// |
		linea( 80 + despl + i, POS_Y, 80 + despl + i, POS_Y + 60);
		// - (izquierda)
		linea( 0 + despl, POS_Y + 40 + i, 70 + despl,POS_Y + 40 + i);
		// diagonal (izquierda superior)
		linea( 0 + despl + i, POS_Y + 140, 50 + despl + i, POS_Y + 62);
		// diagonal (derecha inferior)
		linea(110 + despl + i, POS_Y + 222, 160 + despl + i, POS_Y + 144);
		// diagonal (izquierda inferior)
		linea( 0 + despl + i, POS_Y + 144, 50 + despl + i, POS_Y + 222);
	}
}

void seis(int despl){
	// ancho: 180 - alto: 222
	for(int i = 0; i < GROSOR; i++){
		// diagonal (izquierda superior)
		linea( 0 + despl + i, POS_Y + 140, 50 + despl + i, POS_Y + 62);
		// diagonal (derecha superior)
		linea(110 + despl + i, POS_Y + 62, 160 + despl + i, POS_Y + 140);
		// diagonal (derecha inferior)
		linea(110 + despl + i, POS_Y + 222, 160 + despl + i, POS_Y + 144);
		// diagonal (izquierda inferior)
		linea( 0 + despl + i, POS_Y + 144, 50 + despl + i, POS_Y + 222);
	}
}

void siete(int despl){
	// ancho: 180 - alto: 222
	for(int i = 0; i < GROSOR; i++){
		// |
		linea( 80 + despl + i, POS_Y, 80 + despl + i, POS_Y + 60);
		// - (izquierda)
		linea( 0 + despl, POS_Y + 40 + i, 70 + despl,POS_Y + 40 + i);
		// diagonal (izquierda superior)
		linea( 0 + despl + i, POS_Y + 140, 50 + despl + i, POS_Y + 62);
		// diagonal (derecha inferior)
		linea(110 + despl + i, POS_Y + 222, 160 + despl + i, POS_Y + 144);
	}
}

void ocho(int despl){
	// ancho: 180 - alto: 222
	for(int i = 0; i < GROSOR; i++){
		// |
		linea( 80 + despl + i, POS_Y, 80 + despl + i, POS_Y + 60);
		// - (izquierda)
		linea( 0 + despl, POS_Y + 40 + i, 70 + despl,POS_Y + 40 + i);
		// - (derecha)
		linea(110 + despl, POS_Y + 40 + i,180 + despl,POS_Y + 40 + i);
		// diagonal (derecha inferior)
		linea(110 + despl + i, POS_Y + 222, 160 + despl + i, POS_Y + 144);
		// diagonal (izquierda inferior)
		linea( 0 + despl + i, POS_Y + 144, 50 + despl + i, POS_Y + 222);
	}
}

void nueve(int despl){
	// ancho: 180 - alto: 222
	for(int i = 0; i < GROSOR; i++){
		// |
		linea( 80 + despl + i, POS_Y, 80 + despl + i, POS_Y + 60);
		// diagonal (izquierda superior)
		linea( 0 + despl + i, POS_Y + 140, 50 + despl + i, POS_Y + 62);
		// diagonal (derecha superior)
		linea(110 + despl + i, POS_Y + 62, 160 + despl + i, POS_Y + 140);
		// diagonal (derecha inferior)
		linea(110 + despl + i, POS_Y + 222, 160 + despl + i, POS_Y + 144);
		// diagonal (izquierda inferior)
		linea( 0 + despl + i, POS_Y + 144, 50 + despl + i, POS_Y + 222);
	 }
}

void pintaDigito(int digito, int despl) {
	switch (digito) {
		case 0:
			cero(despl);
			break;
		case 1:
			uno(despl);
			break;
		case 2:
			dos(despl);
		 	break;
		case 3:
			tres(despl);
			break;
		case 4:
			cuatro(despl);
			break;
		case 5:
			cinco(despl);
			break;
		case 6:
			seis(despl);
			break;
		case 7:
			siete(despl);
			break;
		case 8:
			ocho(despl);
			break;
		case 9:
			nueve(despl);
		break;
	 }
}

int cantidadDigitos(int numero) {
	if (numero == 0) {
		return 1;
	}
	int cantidad = 0;
	while (numero != 0) {
		numero /= 10;
		cantidad++;
	}
	return cantidad;
}

void pintaNumero(int numero) {
	int cantDigitos = cantidadDigitos(numero);
	int desplazamiento;
	int digitos[cantDigitos];
	int temp = numero;
	for (int i = cantDigitos - 1; i >= 0; --i) {
		digitos[i] = temp % 10;
		temp /= 10;
	}
	for (int i = 0; i < cantDigitos; ++i) {
		desplazamiento = 240 * ((i+1) - 1);
		pintaDigito(digitos[i], desplazamiento);
	}
}

int main() {
	vredimensiona(800, 500);
	color(ROJO);
 
	for(int i = 100; i >= 0; i-- ){
		pintaNumero(i);
		refresca();
		espera(1000);
		borra();
	}
	return 0;
}
