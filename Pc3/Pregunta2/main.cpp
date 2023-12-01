/*
 Escribir un programa con Miniwin que al presionar una tecla numérica 
 (1 al 9) muestre el número en romanos en pantalla.
 - El programa debe cerrarse si se presiona la tecla ESCAPE (1 punto)
 - El número en romanos debe tener una altura mínima de 200px (1 punto)
 - Solo debe dibujar números si se presiona teclas numéricas (2 puntos)
*/
#include "miniwin.h"
#include <cstdlib>
#include <sstream>
using namespace std;
using namespace miniwin;
// Constantes
const int GROSOR = 20;
const int POS_Y = 100;

void uno(int despl){
	// ancho: 20 - alto: 200
	for(int i = 0; i < GROSOR; i++){
		linea( 0 + despl + i, POS_Y, 0 + despl + i, POS_Y + 200);
	}
}

void cinco(int despl){
	// ancho : 120 - alto: 200
	for(int i = 0; i < GROSOR; i++){
		linea( 0 + despl + i, POS_Y, 50 + despl + i, POS_Y + 200);
		linea(50 + despl + i, POS_Y + 200,100 + despl + i, POS_Y);
	}
}

void diez(int despl){
	// ancho : 120 - alto: 200
	for(int i = 0; i < GROSOR; i++){
		linea( 0 + despl + i, POS_Y, 100 + despl + i, POS_Y + 200);
		linea( 0 + despl + i, POS_Y + 200,100 + despl + i, POS_Y);
	}
}

int main() {
	vredimensiona(500, 500);
	color(ROJO);
	
	int t = tecla();
	while(t!=ESCAPE){
	
	switch(t){
		case '1':
			borra();
			uno(0);
			break;
		case '2':
			borra();
			uno(0);
			uno(40);
			break;
		case '3':
			borra();
			uno(0);
			uno(40);
			uno(80);
			break;
		case '4':
			borra();
			uno(0);
			cinco(40);
			break;
		case '5':
			borra();
			cinco(0);
			break;
		case '6':
			borra();
			cinco(0);
			uno(140);
			break;
		case '7':
			borra();
			cinco(0);
			uno(140);
			uno(180);
			break;
		case '8':
			borra();
			cinco(0);
			uno(140);
			uno(180);
			uno(220);
			break;
		case '9':
			borra();
			uno(0);
			diez(40);
			break;
		}
		refresca();
		t = tecla();
	}
	vcierra();
	return 0;
}

