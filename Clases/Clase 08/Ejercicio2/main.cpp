#include "miniwin.h"
using namespace miniwin;
const int ANCHO = 600;
const int ALTO = 400;
// Verde - Amarillo - Azul
int torres[3][3] = {{1, 2, 3},{0, 0, 0},{0, 0, 0}};

void dibujarFondo(int ancho,int alto){
	color(NEGRO);
    rectangulo_lleno(0,0,ancho,alto);
}

void dibujarTorres(){
    color(BLANCO);
    rectangulo_lleno(95, 100, 105, 380); //A
    rectangulo_lleno(295, 100, 305, 380); //B
    rectangulo_lleno(495, 100, 505, 380); //C
    rectangulo_lleno(0, 380, 600, 390); //BASE
}

void dibujarTorre(char t,int largo,int posicion){
	int posicionTorre[3][2] = {
	{320,340}, // 1
	{340,360}, // 2
	{360,380}}; // 3
	switch(t) {
        case 'A':
            rectangulo_lleno(95-(largo/2-5), posicionTorre[posicion][0], 105+(largo/2-5), posicionTorre[posicion][1]);
            break;
        case 'B':
            rectangulo_lleno(295-(largo/2-5), posicionTorre[posicion][0], 305+(largo/2-5), posicionTorre[posicion][1]);
            break;
        case 'C':
            rectangulo_lleno(495-(largo/2-5), posicionTorre[posicion][0], 505+(largo/2-5), posicionTorre[posicion][1]);
            break;
    }
}

void dibujarBloque(int b, char t, int posicion){
    switch(b){
        case 1:
            color(VERDE);
            dibujarTorre(t,60,posicion);
            break;
        case 2:
            color(AMARILLO);
            dibujarTorre(t,100,posicion);
            break;
        case 3:
            color(AZUL);
            dibujarTorre(t,150,posicion);
            break;
    }
}

void actualizarPosicion(char origen, char destino, int bloque) {
	//  ‘A’, ‘B’, ‘C’ <> 0, 1, 2. 
    int origenIndex = origen - 'A';
    int destinoIndex = destino - 'A';

    // Buscamos la posicion del bloque - torre origen
    int posOrigen = -1;
    for (int i = 0; i < 3; i++) {
        if (torres[origenIndex][i] == bloque) {
            posOrigen = i;
            break;
        }
    }

    // Borramos el bloque - torre origen
    torres[origenIndex][posOrigen] = 0;

    // Buscamos la posicion vacia inferior - torre destino
	int posDestino = -1;
	for (int i = 2; i >= 0; i--) {
	    if (torres[destinoIndex][i] == 0) {
	        posDestino = i;
	        break;
	    }
	}

    // Añadimos el bloque - torre destino
    if (posDestino == -1) {
        torres[destinoIndex][0] = bloque;
        posDestino = 0;
    } else {
        torres[destinoIndex][posDestino] = bloque;
    }
}

void dibujarTorresYBloques() {
    borra();
    dibujarFondo(ANCHO, ALTO);
    dibujarTorres();
    // Dibujamos todos los bloques
    for (int fila = 0; fila < 3; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            if (torres[fila][columna] != 0) {
                dibujarBloque(torres[fila][columna], 'A' + fila, columna);
            }
        }
    }
}

void hanoi(int num,char origen,char destino,char auxiliar){
    if(num==1){
        actualizarPosicion(origen, destino, num);
        dibujarTorresYBloques();
        refresca();
        espera(1000); 
    } else{
        hanoi(num-1,origen,auxiliar,destino);
        actualizarPosicion(origen, destino, num);
        dibujarTorresYBloques();
        refresca();
        espera(1000); 
        hanoi(num-1,auxiliar,destino,origen);
    }
}


int main(){
    vredimensiona(ANCHO, ALTO);
	dibujarFondo(ANCHO, ALTO);
    dibujarTorres();	
    // Posicion de bloques por defecto
	for (int fila = 0; fila < 3; fila++) {
	    for (int columna = 0; columna < 3; columna++) {
	        if (torres[fila][columna] != 0) {
	            dibujarBloque(torres[fila][columna], 'A' + fila,columna);
	        }
	    }
	}
	refresca();
    espera(1000); 
    hanoi(3,'A','C','B');
    refresca();
    return 0;
}
/*
-> origen - 'A', estás restando el código ASCII de ‘A’ del código ASCII de origen. 
Esto te da un número entero que representa la “distancia” entre origen y ‘A’. 
Por ejemplo:
	Si origen es ‘A’, entonces origen - 'A' es 65 - 65, lo que da 0.
	Si origen es ‘B’, entonces origen - 'A' es 66 - 65, lo que da 1.
	Si origen es ‘C’, entonces origen - 'A' es 67 - 65, lo que da 2.
*/

