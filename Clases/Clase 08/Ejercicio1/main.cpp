#include "miniwin.h"
using namespace miniwin;

const int ANCHO = 600;
const int ALTO = 600;
const int DIM = ANCHO;
/*
Progress Bar
for(int i = 0; i< 120; i++){
		espera(150);
		rectangulo_lleno(0+5*i,5,5+5*i,30);
		refresca();
	}
*/
void progressBar(int x, int y, int ancho, int largo){
	for(int i=x; i<x+largo; i+=10){
		espera(50);
		color(VERDE);
		rectangulo_lleno(i,y-ancho/2,i+10,y+ancho/2);
		refresca();
	}
}

void creceDecrece(){
	// Crece
	for(int i = 0; i<=40; i++){
		circulo_lleno(ANCHO/2,ALTO/2,i*5);	
		espera(60);
		refresca();
	}	
	espera(100);
	// Decrece
	for(int i = 40; i>0; i--){
		circulo_lleno(ANCHO/2,ALTO/2,i*5);		
		refresca();
		espera(60);
		borra();
	}
}

void tangram(){
	color_rgb(255,150,0);
    for(int i=0;i<=200;i++){
        linea(i,i,200,i);
        linea(200,i,400-i,i);
    }
    
    color_rgb(105,150,50);
    for(int i=0;i<=200;i++){
        linea(0,i,200-i,200);
        linea(0,200+i,200-i,200+i);
    }
    
    
    color_rgb(40,50,255);
    for(int i=0;i<=200;i++){
        linea(400-i,200+i,400,200+i);
    }
    
    color(ROJO);    
    for(int i=0;i<=100;i++){
        linea(100-i,300+i,100,300+i);
        linea(100,300+i,300-i,500);
    }
}
// Bola Loca
void fondo(){
	color_rgb(12, 75, 75);
	rectangulo_lleno(0, 0, DIM, DIM);	
	color(AMARILLO);
}

void pausa(int i){
	refresca();
	espera(60);
	if(i<20){borra();}	
}

void bolaLoca(){
	for(int i = 0; i<=20; i++){	
		fondo();
		circulo_lleno(DIM/4+i*DIM/40,DIM/4,40);			
		pausa(i);							
	}	
	for(int i = 0; i<=20; i++){	
		fondo();
		circulo_lleno(DIM/4+DIM/2,DIM/4+i*DIM/40,40);			
		pausa(i);							
	}	
	for(int i = 0; i<=20; i++){	
		fondo();
		circulo_lleno(DIM/4+DIM/2-i*DIM/40,DIM/4+DIM/2,40);			
		pausa(i);							
	}
	
	for(int i = 0; i<=20; i++){	
		fondo();
		circulo_lleno(DIM/4,DIM/4+DIM/2-i*DIM/40,40);			
		pausa(i);							
	}
}
int main(){
	vredimensiona(ANCHO,ALTO);
	// progressBar(100,100,20,400);
	// creceDecrece();
	// tangram();
	bolaLoca();
	refresca();
	return 0;
}
