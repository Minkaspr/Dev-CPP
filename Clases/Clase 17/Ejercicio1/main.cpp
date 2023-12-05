/*
Mercado de videojuegos y la etica aplicado al juego, jugadores, desarrolladores entre otros
Realizar en miniwin el sistema solar completo:
Sol y 8 planetas en movimiento, con trayectorias elipticas y 
respetando el movimiento horario y antihorario de cada planeta.
*/
#include "miniwin.h"
#include <cstdlib>
#include <sstream>
#include <cmath>
using namespace std;
using namespace miniwin;

void elipse(float semiejeMenor, float semiejeMayor, float radioCirculo , float angulo){
	float x = semiejeMayor * cos(angulo);
    float y = semiejeMenor * sin(angulo);
    circulo_lleno(600 + x, 400 + y, radioCirculo);
}

int main(){
	vredimensiona(1200, 800);
	
    int t = tecla();
    //float anguloHor = 0;
    float anguloAntiHor = 0;
    
    while (t != ESCAPE) {
    	// Fondo de la galaxia
	    color_rgb(0,6,38);
	    rectangulo_lleno(0,0,1200,800);
     	// Sol
     	color_rgb(253,246,102);
     	circulo_lleno(600, 400, 25);
     	
     	// Mercurio
     	color_rgb(255,0,13);
     	elipse(60,120,10, anguloAntiHor);
     	
     	// Venus
     	color_rgb(12,255,123);
     	elipse(100,180,14, anguloAntiHor+2.2);
     	
     	// Tierra
     	color_rgb(102,173,253);
     	elipse(140,220,12, anguloAntiHor+3.4);
     	
     	// Marte
     	color_rgb(253,150,102);
     	elipse(190,270,11, anguloAntiHor+0.4);
     	
     	// Júpiter
     	color_rgb(10,250,252);
     	elipse(260,320,25, anguloAntiHor+3.6);
     	
     	// Saturno
     	color_rgb(245,10,252);
     	elipse(310,370,22, anguloAntiHor+2.6);
     	
     	// Urano
     	color_rgb(128,126,128);
     	elipse(360,410,15, anguloAntiHor+1.3);
     	
     	// Neptuno
     	color_rgb(5,128,11);
     	elipse(390,480,14, anguloAntiHor+2.8);
     	
     	//anguloHor += 0.1;
		anguloAntiHor -= 0.1;
		
     	refresca();
        espera(75);
        borra();
        t = tecla();
	}
    vcierra();
    refresca();
	return 0;
}

