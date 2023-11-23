#include "miniwin.h"
#include <string>
#include <sstream>
#include <cstdlib>

using namespace miniwin;
using namespace std;

inline string aString(int numero){
    ostringstream buffer;
    buffer<<numero;
    return buffer.str();
}

void creep(int despl, int y){
	// Ancho: 40 - Alto: 80
	color_rgb(237,197,117);
	circulo_lleno(20 + despl,20 + y,20);
	rectangulo_lleno(0 + despl,20 + y,40 + despl,80 + y);
}

void mira(int x, int y, int ta){
    color(ROJO);
    circulo(x,y,ta);
    circulo(x,y,++ta);
    rectangulo_lleno(x-1,y-ta-10,x+1,y-10);    
    rectangulo_lleno(x-1,y+ta+10,x+1,y+10);    
    rectangulo_lleno(x+ta+10,y-1,x+10,y+1);
    rectangulo_lleno(x-ta-10,y-1,x-10,y+1);
}

int main(){    
    vredimensiona(500,500);
    int t = tecla();
    int posX = 0, posY = 0;
    int puntos = 0;
    int contTiempo = 0;
    int retrasoTiempo = 0;
    int desplCreep = 0;
    int cantAparecerCreep = 0;
    int oleada = 0;
    int posTemDisparo;
    bool ratonPresionado = false; // El ratón no está siendo presionado
    bool creepGolpeado = false;
    
	while(t != ESCAPE){
		// Fondo
	    color_rgb(229,253,255);
	    rectangulo_lleno(0,0,500,500);
	    
	    // Información
	    color(ROJO);
	    texto(  8, 8, "Puntos: " + aString(puntos));
	    texto(200, 8, "Oleada: " + aString(oleada));
	    
	    if (raton_dentro()){
            posX = raton_x(); //raton_x es la posición en X
            posY = raton_y(); //raton_y es la posición en Y
        }  
	    
	    // Dibujar cada 1 segundo
        if (contTiempo == 100) { // 100 * 10ms = 1s
        	// variable = limite inferior + rand()% (limite superior + 1 - limite inferior);
		    int direccionCreep = 1 + rand() % (5 + 1 - 1);
		    desplCreep = 70 * direccionCreep;
		    contTiempo = 0;
		    retrasoTiempo = 1;
		    cantAparecerCreep ++;
		    
        }
        
        // Cuando un nuevo creep aparece
        if (retrasoTiempo == 0 && contTiempo == 0) { 
        	creepGolpeado = false; // Resetear golpe
    		oleada++; // Incrementar Oleada 
		}
    
        // Dibujar el creep
        if (retrasoTiempo == 0){
        	creep(50 + desplCreep, 200);
        	contTiempo++;
		}
		
        // Retraso de 2 segundos
        if (retrasoTiempo >= 1){
        	retrasoTiempo ++;
		}
		// Resetear retraso
		if (retrasoTiempo == 200){ // 200 * 10ms = 2s
        	retrasoTiempo = 0;
		}
        
        // Dibujar mira
	    mira(posX,posY,20);
	    
	    //Click Izquierdo
        if(raton_boton_izq()){
		    if(!ratonPresionado && !creepGolpeado) { // El ratón se ha presionado y el creep no ha sido golpeado
		        if((posX >= 50 + desplCreep && posX <= 50 + desplCreep + 40) && (posY >= 200 && posY <= 200 + 80)) {
		            puntos++;
		            creepGolpeado = true; 
		        }
		        ratonPresionado = true; // El ratón está presionado
		    }
		    circulo_lleno(posX,posY,40);
		} else {
		    ratonPresionado = false; // El ratón se libera
		}
				
		// 3 Puntos
		if (cantAparecerCreep == 5) {
            if (puntos >= 3) {
            mensaje("GANASTE");
            
	        } else {
	        	mensaje("PERDISTE");
			}
			vcierra();
        }
		
	    refresca();
	    espera(10);
	    borra();
        t = tecla();
    }
    vcierra();
    return 0;
}
