#include "miniwin.h"
#include <cstdlib>
#include <sstream>
using namespace std;
using namespace miniwin;

// Constantes y Variable
const int GROSOR = 20;
const int POS_Y = 100;
int despl = 0;

void a(int despl){
	// ancho: 120 - alto: 200
	for(int i = 0; i < GROSOR; i++){
		linea( 0 + despl + i, POS_Y + 200, 50 + despl + i, POS_Y);
        linea(50 + despl + i, POS_Y, 100 + despl + i, POS_Y + 200);
        linea(25 + despl, POS_Y + 100 + i, 75 + i + despl , POS_Y + 100 + i);
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

void i(int despl){
	// ancho: 20 - alto: 200
	for(int i = 0; i < GROSOR; i++){
        linea( 0 + despl + i, POS_Y, 0 + despl + i, POS_Y + 20);
        linea( 0 + despl + i, POS_Y + 30, 0 + despl + i, POS_Y + 200);
    }
}

void o(int despl){
	// ancho: 100 - alto: 200
	for(int i = 0; i < GROSOR; i++){
        linea( 0 + despl + i, POS_Y, 0 + despl + i, POS_Y + 200);
		linea( 0 + despl, POS_Y + i,100 + despl, POS_Y + i );
		linea( 0 + despl, POS_Y - i + 200,100 + despl, POS_Y - i + 200);
        linea(100 + despl + i, POS_Y, 100 + despl + i, POS_Y + 200);
    }
}

void u(int despl){
	// ancho: 100 - alto: 200
	for(int i = 0; i < GROSOR; i++){
        linea( 0 + despl + i, POS_Y, 0 + despl + i, POS_Y + 200);
		linea( 0 + despl, POS_Y - i + 200,100 + despl, POS_Y - i + 200);
        linea(100 + despl + i, POS_Y, 100 + despl + i, POS_Y + 200);
    }
}

void dibujaLetra(char letra){
    switch(letra){
        case 'a':
        case 'A':
            a(despl);
            break;
        case 'e':
        case 'E':
            e(despl);
            break;
        case 'i':
        case 'I':
            i(despl);
            break;
        case 'o':
        case 'O':
            o(despl);
            break;
        case 'u':
        case 'U':
            u(despl);
            break;
    }
}

int main() {
    vredimensiona(1280, 500);
    color(ROJO);
    
    char letra;
    int t = tecla();
    while (t != ESCAPE) {
        if(t == 'a' || t == 'A' ||
			t == 'e' || t == 'E' || 
			t == 'i' || t == 'I' || 
			t == 'o' || t == 'O' || 
			t == 'u' || t == 'U'){
            letra = t;
        }
        
        borra();
        dibujaLetra(letra);
        
        refresca();
        espera(250);
        t = tecla();
    }
    
    return 0;
}
