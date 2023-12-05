#include "miniwin.h"
#include <cstdlib>
#include <sstream>
using namespace std;
using namespace miniwin;

int LG_AMARRILLO = 320;
int LG_ROJO = 200;
int LG_AZUL = 200;

void recAmarillo(int x,int y){
	for(int i = 0; i <= 160; i++ ){
		// negro vertical
		if(i == 0||i == 52 || i == 106 || i == 160){
			color(NEGRO);
			/* -> \ */
			linea(x+i, y - (i/2),x + 160 + i, y + 80 - (i/2));
			/* -> / */
			linea(x+i, y + (i/2),x + 160 + i, y - 80 + (i/2));
		}else {
			color(AMARILLO);
			linea(x+i, y - (i/2),x + 160 + i, y + 80 - (i/2));	
		}
	}
}

void recRojo(int x, int y){
	color(ROJO);
	for(int i = 0; i <= LG_ROJO; i++ ){
		linea(x, y + i,x + 160, y + 80 + i);
		if(i == 0||i == 68 || i == 132 || i == LG_AZUL ){
			// negro horizontal
			color(NEGRO);
			linea(x, y + i,x + 160, y + 80 + i);
		}else {
			color(ROJO);
			linea(x, y + i,x + 160, y + 80 + i);
		}
	}
	for(int i = 0; i <= 160; i++ ){
		// negro vertical
		if(i == 0||i == 52 || i == 106 || i == 160){
			color(NEGRO);
			linea(x+i, y + (i/2),x + i, y + 200 + (i/2));
		}
	}
}

void recAzul(int x, int y){
	
	for(int i = 0; i <= LG_AZUL; i++ ){
		if(i == 0||i == 68 || i == 132 || i == LG_AZUL ){
			color(NEGRO);
			linea(x, y + i,x - 160, y + 80 + i);
		}else {
			color(AZUL);
			linea(x, y + i,x - 160, y + 80 + i);
		}
	}
	for(int i = 0; i <= 160; i++ ){
		// negro vertical
		if(i == 0||i == 52 || i == 106 || i == 160){
			color(NEGRO);
			linea(x-i, y + (i/2),x - i, y + 200 + (i/2));
		}
	}
}

int main() {
	vredimensiona(800, 500);
	int lado_inicial = 50;
	color(BLANCO);
	rectangulo_lleno(0,0,800,500);
	// lado amarillo
	recAmarillo(lado_inicial +  84,146);
	// lado rojo
	recRojo(lado_inicial +  84,146);
	// lado azul
	recAzul(lado_inicial + 403,146);
	refresca();
	return 0;
}
