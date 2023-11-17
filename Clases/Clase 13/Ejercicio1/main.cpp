#include "miniwin.h"
#include <cstdlib>
#include <sstream>
using namespace std;
using namespace miniwin;

void cero(int despl){
	rectangulo_lleno(10+despl,0,110+despl,10);
    rectangulo_lleno(0+despl,10,10+despl,110);
    rectangulo_lleno(110+despl,10,120+despl,110);
    rectangulo_lleno(0+despl,120,10+despl,220);
    rectangulo_lleno(110+despl,120,120+despl,220);
    rectangulo_lleno(10+despl,220,110+despl,230);
}

void uno(int despl){
	rectangulo_lleno(110+despl,10,120+despl,110);
	rectangulo_lleno(110+despl,120,120+despl,220);
}

void dos(int despl){
	rectangulo_lleno(10+despl,0,110+despl,10);
    rectangulo_lleno(110+despl,10,120+despl,110);
    rectangulo_lleno(10+despl,110,110+despl,120);
    rectangulo_lleno(0+despl,120,10+despl,220);
    rectangulo_lleno(10+despl,220,110+despl,230);
}

void tres(int despl){
	rectangulo_lleno(10+despl,0,110+despl,10);
    rectangulo_lleno(110+despl,10,120+despl,110);
    rectangulo_lleno(10+despl,110,110+despl,120);
    rectangulo_lleno(110+despl,120,120+despl,220);
    rectangulo_lleno(10+despl,220,110+despl,230);
}

void cuatro(int despl){
    rectangulo_lleno(0+despl,10,10+despl,110);
    rectangulo_lleno(110+despl,10,120+despl,110);
    rectangulo_lleno(10+despl,110,110+despl,120);
    rectangulo_lleno(110+despl,120,120+despl,220);
}

void cinco(int despl){
	rectangulo_lleno(10+despl,0,110+despl,10);
    rectangulo_lleno(0+despl,10,10+despl,110);
    rectangulo_lleno(10+despl,110,110+despl,120);
    rectangulo_lleno(110+despl,120,120+despl,220);
    rectangulo_lleno(10+despl,220,110+despl,230);
}

void seis(int despl){
	rectangulo_lleno(10+despl,0,110+despl,10);
    rectangulo_lleno(110+despl,10,120+despl,110);
    rectangulo_lleno(10+despl,110,110+despl,120);
    rectangulo_lleno(0+despl,120,10+despl,220);
    rectangulo_lleno(110+despl,120,120+despl,220);
    rectangulo_lleno(10+despl,220,110+despl,230);
}
void siete(int despl){
	rectangulo_lleno(10+despl,0,110+despl,10);
    rectangulo_lleno(110+despl,10,120+despl,110);
    rectangulo_lleno(110+despl,120,120+despl,220);
}

void ocho(int despl){
	rectangulo_lleno(10+despl,0,110+despl,10);
    rectangulo_lleno(0+despl,10,10+despl,110);
    rectangulo_lleno(110+despl,10,120+despl,110);
    rectangulo_lleno(10+despl,110,110+despl,120);
    rectangulo_lleno(0+despl,120,10+despl,220);
    rectangulo_lleno(110+despl,120,120+despl,220);
    rectangulo_lleno(10+despl,220,110+despl,230);
}

void nueve(int despl){
	rectangulo_lleno(10+despl,0,110+despl,10);
    rectangulo_lleno(0+despl,10,10+despl,110);
    rectangulo_lleno(110+despl,10,120+despl,110);
    rectangulo_lleno(10+despl,110,110+despl,120);
    rectangulo_lleno(110+despl,120,120+despl,220);
    rectangulo_lleno(10+despl,220,110+despl,230);
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
    	desplazamiento = 130 * ((i+1) - 1);
        pintaDigito(digitos[i], desplazamiento);
    }
}

int main() {
    vredimensiona(500, 500);
    color(ROJO);
    
    for(int i = 0; i <= 100; i++ ){
	    pintaNumero(i);
	    refresca();
	    espera(1000);
	    borra();
	}
	for(int i = 100; i >= 0; i-- ){
	    pintaNumero(i);
	    refresca();
	    espera(50);
	    borra();
	}
	    
    //nueve(0); // 1 = 130 * (cantidadDigitos - 1) 
    //nueve(130); // 2 = 130 * (cantidadDigitos - 1)
    //nueve(260); // 3 = 130 * (cantidadDigitos - 1)
    //nueve(390); // 4 = 130 * (cantidadDigitos - 1)
    
return 0;
}
