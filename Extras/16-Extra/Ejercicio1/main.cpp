#include "miniwin.h"
#include <cstdlib>
#include <sstream>
#include <cmath>
using namespace std;
using namespace miniwin;

// Constantes y Variable
const int DIM_X = 1200;
const int DIM_Y = 800;
float ejeMayorTierra = 760;
float ejeMenorTierra = 440;
float ejeMayorLuna = 80;
float ejeMenorLuna = 40;
float radioLuna = 10;
float radioTierra = 24;
float radioSol = 25;

void elipse(float ejeMayor, float ejeMenor , float anguloT,  float anguloL){
	// Tierra
    float semiejeMayorT = ejeMayor / 2;
    float semiejeMenorT = ejeMenor / 2;
    float xT = semiejeMayorT * cos(anguloT);
    float yT = semiejeMenorT * sin(anguloT);
    color_rgb(102,173,253);
    circulo_lleno((DIM_X/2)+ xT, (DIM_Y/2) + yT, radioTierra);
    
    // Luna
    float semiejeMayorL = ejeMayorLuna / 2;
    float semiejeMenorL = ejeMenorLuna / 2;
    float xL = semiejeMayorL * cos(anguloL);
    float yL = semiejeMenorL * sin(anguloL);
    color_rgb(218,219,220);
    circulo_lleno((DIM_X/2)+ xT + xL, (DIM_Y/2) + yT + yL, radioLuna); // La posición de la luna es relativa a la tierra
}

int main(){
    vredimensiona(DIM_X, DIM_Y);
	
    int t = tecla();
    //float anguloHor = 0;
    float anguloAntiHorT = 0;
    float anguloAntiHorL = 0;
    
    while (t != ESCAPE) {
    	// Fondo de la galaxia
	    color_rgb(0,6,38);
	    rectangulo_lleno(0,0,1200,800);
     	// Sol
     	color_rgb(253,246,102);
     	circulo_lleno(600, 400, radioSol);
     	
     	// Tierra y Luna
     	elipse(ejeMayorTierra, ejeMenorTierra, anguloAntiHorT,anguloAntiHorL);
     	
     	//anguloHor += 0.1;
		anguloAntiHorT -= 0.1;
		anguloAntiHorL -= 0.3;
		
     	refresca();
        espera(50);
        borra();
        t = tecla();
	}
    vcierra();
    refresca();
	return 0;
}

