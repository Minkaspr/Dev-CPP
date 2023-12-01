#include "miniwin.h"
#include <cstdlib>
#include <sstream>
using namespace std;
using namespace miniwin;

int LG_AMARRILLO = 320;
int LG_ROJO = 200;
int LG_AZUL = 200;

void recAmarillo(int x,int y){
	color(AMARILLO);
	for(int i = 0; i <= 80; i++ ){
		// Superior
		linea(x+(i*2),y-i,x + LG_AMARRILLO -(i*2),y-i);
		// Inferior
		linea(x+(i*2),y+i,x + LG_AMARRILLO -(i*2),y+i);
	}
}

void recRojo(int x, int y){
	color(ROJO);
	for(int i = 0; i <= LG_ROJO; i++ ){
		linea(x, y + i,x + 160, y + 80 + i);
	}
}

void recAzul(int x, int y){
	color(AZUL);
	for(int i = 0; i <= LG_AZUL; i++ ){
		linea(x, y + i,x - 160, y + 80 + i);
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

