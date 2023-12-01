/*
 Escribir un programa con Miniwin que al presionar una tecla numérica 
 (1 al 9) muestre el número en romanos en pantalla.
 - El programa debe cerrarse si se presiona la tecla ESCAPE (1 punto)
 - El número en romanos debe tener una altura mínima de 200px (1 punto)
 - Solo debe dibujar números si se presiona teclas numéricas (2 puntos)
*/
#include "miniwin.h"
using namespace miniwin;

void numeroRomano(int valor){	
	color(NEGRO);
	rectangulo_lleno(0,0,400,400);
	color(AMARILLO);
	switch(valor){
			case 49:
				rectangulo_lleno(180,50,220,350);
				break;
			case 50:
				rectangulo_lleno(150,50,190,350);
				rectangulo_lleno(210,50,250,350);				
				break;	
			case 51:
				rectangulo_lleno(120,50,160,350);
				rectangulo_lleno(180,50,220,350);
				rectangulo_lleno(240,50,280,350);
				break;	
			case 52:
				rectangulo_lleno(180,100,220,150);
				break;	
			case 53:
				rectangulo_lleno(180,100,220,150);
				break;	
			case 54:
				rectangulo_lleno(180,100,220,150);
				break;	
			case 55:
				rectangulo_lleno(180,100,220,150);
				break;	
			case 56:
				rectangulo_lleno(180,100,220,150);
				break;	
			case 57:
				rectangulo_lleno(180,100,220,150);
				break;					
		}
}

int main(){
    vredimensiona(400,400);
	int t = tecla();
	while(t != ESCAPE){
		if(t>=49 && t<=57)
			numeroRomano(t);		
		refresca();
		espera(500);
		t = tecla();
	}    
	vcierra();
    return 0;
}
