#include "miniwin.h"
#include <cstdlib>
#include <sstream>
using namespace std;
using namespace miniwin;

int LG_AMARRILLO = 80;
int LG_ROJO = 50;
int LG_AZUL = 50;

void recAmarillo(int x,int y){
	color(AMARILLO);
	// Superior
	for(int i = 0; i <= 20; i++ ){
	linea(x+(i*2),y-i,x + LG_AMARRILLO -(i*2),y-i);
	}
	// Inferior
	for(int i = 0; i <= 20; i++ ){
	linea(x+(i*2),y+i,x + LG_AMARRILLO -(i*2),y+i);
	}
}

void recRojo(int x, int y){
	color(ROJO);
	for(int i = 0; i <= LG_ROJO; i++ ){
		linea(x,y+i,x + 40,y+20+i);
	}
}

void recAzul(int x, int y){
	color(AZUL);
	for(int i = 0; i <= LG_AZUL; i++ ){
		linea(x,y + i,x - 40,y+20+i);
	}
}

int main() {
	vredimensiona(800, 500);
	int lado_incial = 50;
	color(ROJO);
	// lado amarillo
	recAmarillo(lado_incial +  84, 60);
	
	recAmarillo(lado_incial +  42, 81);
	recAmarillo(lado_incial + 126, 81);
	
	recAmarillo(lado_incial +   0,102);
	recAmarillo(lado_incial +  84,102);
	recAmarillo(lado_incial + 168,102);
	
	recAmarillo(lado_incial +  42,123);
	recAmarillo(lado_incial + 126,123);
	
	recAmarillo(lado_incial +  84,144);
	// lado rojo
	recRojo(lado_incial +   0,106);
	recRojo(lado_incial +  41,126);
	recRojo(lado_incial +  82,146);
	
	recRojo(lado_incial +   0,158);
	recRojo(lado_incial +  41,178);
	recRojo(lado_incial +  82,198);
	
	recRojo(lado_incial +   0,210);
	recRojo(lado_incial +  41,230);
	recRojo(lado_incial +  82,250);
	// lado azul
	recAzul(lado_incial + 163,146);
	recAzul(lado_incial + 205,125);
	recAzul(lado_incial + 247,104);
	
	recAzul(lado_incial + 163,198);
	recAzul(lado_incial + 205,177);
	recAzul(lado_incial + 247,156);
	
	recAzul(lado_incial + 163,250);
	recAzul(lado_incial + 205,229);
	recAzul(lado_incial + 247,208);
	refresca();
	return 0;
}
