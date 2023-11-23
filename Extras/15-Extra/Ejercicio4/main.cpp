#include "miniwin.h"
#include <cstdlib>
#include <sstream>
using namespace std;
using namespace miniwin;

// Constantes
const int GROSOR = 20;
const int POS_Y = 100;

void a(int despl){
	// ancho: 120 - alto: 200
	for(int i = 0; i < GROSOR; i++){
		linea( 0 + despl + i, POS_Y + 200, 50 + despl + i, POS_Y);
        linea(50 + despl + i, POS_Y, 100 + despl + i, POS_Y + 200);
        linea(25 + despl, POS_Y + 100 + i, 75 + i + despl , POS_Y + 100 + i);
    }
}

void b(int despl){
	// ancho: 100 - alto: 200
	for(int i = 0; i < GROSOR; i++){
        linea( 0 + despl + i, POS_Y, 0 + despl + i, POS_Y + 200);
		linea( 0 + despl, POS_Y + i,80 + despl, POS_Y + i );
		linea( 0 + despl, POS_Y + i + 90,80 + despl, POS_Y + i + 90);
		linea( 0 + despl, POS_Y - i + 200,80 + despl, POS_Y - i + 200);
		linea(80 + despl + i, POS_Y + 20, 80 + despl + i, POS_Y + 90);
		linea(80 + despl + i, POS_Y + 110, 80 + despl + i, POS_Y + 180);
    }
}

void c(int despl){
	// ancho: 100 - alto: 200
	for(int i = 0; i < GROSOR; i++){
        linea( 0 + despl + i, POS_Y, 0 + despl + i, POS_Y + 200);
		linea( 0 + despl, POS_Y + i,100 + despl, POS_Y + i );
		linea( 0 + despl, POS_Y - i + 200,100 + despl, POS_Y - i + 200);
    }
}

void d(int despl){
	// ancho: 120 - alto: 200
	for(int i = 0; i < GROSOR; i++){
        linea( 0 + despl + i, POS_Y, 0 + despl + i, POS_Y + 200);
		linea( 0 + despl, POS_Y + i,100 + despl, POS_Y + i );
		linea( 0 + despl, POS_Y - i + 200,100 + despl, POS_Y - i + 200);
        linea(100 + despl + i, POS_Y + 20, 100 + despl + i, POS_Y + 180);
    }
}

void e(int despl){
	// ancho: 100 - alto: 200
	for(int i = 0; i < GROSOR; i++){
        linea( 0 + despl + i, POS_Y, 0 + despl + i, POS_Y + 200);
		linea( 0 + despl, POS_Y + i,100 + despl, POS_Y + i );
		linea( 0 + despl, POS_Y + i + 90,80 + despl, POS_Y + i + 90);
		linea( 0 + despl, POS_Y - i + 200,100 + despl, POS_Y - i + 200);
    }
}

int main() {
    vredimensiona(1280, 500);
    color(ROJO);
    for(char letra = 'A'; letra <= 'E'; letra++){
        switch(letra){
            case 'A':
                a(0);
                break;
            case 'B':
                b(130);
                break;
            case 'C':
                c(260);
                break;
            case 'D':
                d(390);
                break;
            case 'E':
                e(520);
                break;
        }
        refresca();
	    espera(500);
	    borra();
	}
	
	int despl = 0;
    for(char letra = 'E'; letra >= 'A'; letra--){
        switch(letra){
            case 'A':
                a(despl);
                break;
            case 'B':
                b(despl);
                break;
            case 'C':
                c(despl);
                break;
            case 'D':
                d(despl);
                break;
            case 'E':
                e(despl);
                break;
        }
        despl += 130;  
        refresca();
	    espera(500);
	    borra();
	}
	return 0;
}


