#include "miniwin.h"
using namespace miniwin;

void nave(int x, int y){
	color(BLANCO);
	rectangulo_lleno(x-10,y-30,x+10,y+10);	
	color(ROJO);
	rectangulo_lleno(x-10,y+10,x+10,y+15);
	rectangulo_lleno(x-7,y+15,x+7,y+20);
	rectangulo_lleno(x-3,y+20,x+3,y+25);
}
//Constantes para el tamaño de la pantalla
const int ANCHO = 600;
const int ALTO = 600;
int main(){
    vredimensiona(ANCHO,ALTO);
    //Posición inicial de la nave
    int posX = ANCHO/2, posY = ALTO/2;
    //Dibujar la nave
    nave(posX,posY);    
    refresca();
    //lectura de tecla
    int t = tecla();
    while(t != ESCAPE){
    	switch(t){
			case DERECHA:	
				if(posX<=580){
					posX += 10;	
				}
				break;
			case IZQUIERDA:
				if(posX>=20){
					posX -= 10;	
				}			
				break;
			case ABAJO:
				if(posY<=570){
					posY += 10;
				}
				break;
			case ARRIBA:
				if(posY>=33){
					posY -= 10;	
				}			
				break;
		}
		nave(posX,posY);
		refresca();
		espera(50);
		borra();
		t=tecla();
	}
    return 0;
}
