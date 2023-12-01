/*
Crear un contador del 100 al 0 usando el sistema de numeración de la película 
"Depredador" (4 puntos)
*/
#include "miniwin.h"
using namespace miniwin;

void numeroDepredador(int x, int y, int v){
	color(NEGRO);
	rectangulo_lleno(x-200,y-200,x+200,y+200);
	color(ROJO);
	//Central superior
	if(!(v==3 || v==4 || v==6)){
		rectangulo_lleno(x-10,y-180,x+10,y-80);
		circulo_lleno(x,y-180,10);
		circulo_lleno(x,y-80,10);
	}		
	//Laterales superiores		
	if(v <= 2 || v == 5 || v == 7 || v == 8){
		rectangulo_lleno(x-135,y-100,x-25,y-80);		
		circulo_lleno(x-135,y-90,10);		
		circulo_lleno(x-25,y-90,10);
	}	
	if(v <= 4 || v == 8){
		rectangulo_lleno(x+135,y-100,x+25,y-80);		
		circulo_lleno(x+135,y-90,10);		
		circulo_lleno(x+25,y-90,10);		
	}
	//diagonales
	for(int i=0;i<25;i++){		
		if(!(v==3 || v==8))
			linea(x-125+i,y+40,x-50+i,y-60);	
		if(!(v==1 || v==7))
			linea(x-125+i,y+60,x-50+i,y+160);		
		if((v % 2 == 0 && v < 8)|| v == 9)		
			linea(x+125-i,y+40,x+50-i,y-60);
		if(v == 0 || (v >= 5 && v <= 9))
			linea(x+125-i,y+60,x+50-i,y+160);
	}
}


int main(){
    vredimensiona(1200,400);
	int t = tecla();
	int c,d,u;
	while(t != ESCAPE){
		for(int i = 100; i>0; i--){
			//Unidades
			u = i % 10;
			numeroDepredador(1000,200,u);			
			//Decenas			
			d = (i/10) % 10;
			numeroDepredador(600,200,d);
			//Centenas
			c = i / 100;
			numeroDepredador(200,200,c);			
			refresca();
			espera(1000);
		}		
		t = tecla();
	}    
	vcierra();
    return 0;
}
