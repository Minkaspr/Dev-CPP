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

void cincuenta (int despl){
	// ancho : 100 - alto: 200
	for(int i = 0; i < GROSOR; i++){
        linea( 0 + despl + i, POS_Y, 0 + despl + i, POS_Y + 200);
		linea( 0 + despl, POS_Y - i + 200,80 + despl, POS_Y - i + 200);
    }
}

void cien (int despl){
	// ancho : 120 - alto: 200
	for(int i = 0; i < GROSOR; i++){
		linea( 0 + despl, POS_Y + i,100 + despl, POS_Y + i );
        linea( 0 + despl + i, POS_Y, 0 + despl + i, POS_Y + 200);
		linea( 0 + despl, POS_Y - i + 200,100 + despl, POS_Y - i + 200);
    }
}

void quinientos (int despl){
	// ancho : 100 - alto: 200
	for(int i = 0; i < GROSOR; i++){
		linea( 0 + despl, POS_Y + i,80 + despl, POS_Y + i );
        linea( 0 + despl + i, POS_Y, 0 + despl + i, POS_Y + 200);
		linea( 0 + despl, POS_Y - i + 200,80 + despl, POS_Y - i + 200);
		linea( 80 + despl + i, POS_Y + 20, 80 + despl + i, POS_Y + 200 - 20);
    }
}

void mil(int despl){
	// ancho : 120 - alto: 200
	for(int i = 0; i < GROSOR; i++){
        linea( 0 + despl + i, POS_Y, 0 + despl + i, POS_Y + 200);
        linea( 0 + despl + i, POS_Y, 50 + despl + i, POS_Y + 100);
        linea( 50 + despl + i, POS_Y + 100, 100 + despl + i, POS_Y);
		linea( 100 + despl + i, POS_Y, 100 + despl + i, POS_Y + 200);
    }
}

void dibujaRomano(int num){
    int valores[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int despl = 0;

    for(int i = 0; i < 13; i++){
        while(num >= valores[i]){
            num -= valores[i];
            switch(valores[i]){
                case 1:
                    uno(despl);
                    break;
                case 4:
                    uno(despl);
                    despl += 130;
                    cinco(despl);
                    break;
                case 5:
                    cinco(despl);
                    break;
                case 9:
                    uno(despl);
                    despl += 130;
                    diez(despl); 
                    break;
                case 10:
                    diez(despl);
                    break;
                case 40:
                    diez(despl);
                    despl += 130;
                    cincuenta(despl);
                    break;
                case 50:
                    cincuenta(despl);
                    break;
                case 90:
                    diez(despl);
                    despl += 130;
                    cien(despl);
                    break;
                case 100:
                    cien(despl);
                    break;
                case 400:
                    cien(despl);
                    despl += 130;
                    quinientos(despl);
                    break;
                case 500:
                    quinientos(despl);
                    break;
                case 900:
                    cien(despl);
                    despl += 130;
                    mil(despl);
                    break;
                case 1000:
                    mil(despl);
                    break;
            }
            despl += 130;  // Separación entre los números
        }
    }
}

int main() {
    vredimensiona(1280, 500);
    color(ROJO);
    
    // Dibuja todos los números del 1 al 1000
    for(int i = 0; i <= 1000; i++){
        dibujaRomano(i);
        refresca();
	    espera(1000);
	    borra();
	}
	return 0;
}

