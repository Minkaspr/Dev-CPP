#include "miniwin.h"
#include <cstdlib>
#include <sstream>
using namespace miniwin;
using namespace std;

/**
 * ULTIMATE SPACE INVADERS
 */

inline string aString(int numero){
    ostringstream buffer;
    buffer << numero;
    return buffer.str();
}

void naveRoja(int x, int y){
	// Ancho: 54 - Alto: 58
	color_rgb(178,102,102);
    rectangulo_lleno( 0 + x, 4 + y, 4 + x,28 + y);
    rectangulo_lleno( 4 + x,12 + y, 8 + x,24 + y);
    rectangulo_lleno( 8 + x, 8 + y,12 + x,40 + y);
    rectangulo_lleno(12 + x,16 + y,16 + x,36 + y);
    rectangulo_lleno(16 + x, 0 + y,20 + x,12 + y);
    rectangulo_lleno(16 + x,20 + y,20 + x,48 + y);
    rectangulo_lleno(20 + x, 4 + y,24 + x,16 + y);
    rectangulo_lleno(20 + x,24 + y,24 + x,54 + y);
    // Centro de la nave: 24 - 28 x
    rectangulo_lleno(24 + x, 8 + y,28 + x,32 + y);
    rectangulo_lleno(24 + x,44 + y,28 + x,58 + y);
    rectangulo_lleno(28 + x, 4 + y,32 + x,16 + y);
    rectangulo_lleno(28 + x,24 + y,32 + x,54 + y);
    rectangulo_lleno(32 + x, 0 + y,36 + x,12 + y);
    rectangulo_lleno(32 + x,20 + y,36 + x,48 + y);
    rectangulo_lleno(36 + x,16 + y,40 + x,36 + y);
    rectangulo_lleno(40 + x, 8 + y,44 + x,40 + y);
    rectangulo_lleno(44 + x,12 + y,48 + x,24 + y);
    rectangulo_lleno(48 + x, 4 + y,52 + x,28 + y);
}

void disparoNaveRoja(int x, int y) {
    color_rgb(255,78,78);
    rectangulo_lleno(x + 24, y, x + 28, y + 10);
}

void naveAzul(int x, int y){
	// Ancho: 54 - Alto: 58
	color_rgb(103,143,178);
    rectangulo_lleno( 0 + x,24 + y, 4 + x,48 + y);
    rectangulo_lleno( 4 + x,20 + y, 8 + x,54 + y);
    rectangulo_lleno( 8 + x,24 + y,12 + x,48 + y);
    rectangulo_lleno(12 + x,28 + y,16 + x,44 + y);
    rectangulo_lleno(16 + x,28 + y,20 + x,44 + y);
    rectangulo_lleno(20 + x, 4 + y,24 + x,52 + y);
    rectangulo_lleno(24 + x, 0 + y,28 + x,12 + y);
    // Centro de la nave: 24 - 28 x
    rectangulo_lleno(24 + x,24 + y,28 + x,58 + y);
    rectangulo_lleno(28 + x, 4 + y,32 + x,52 + y);
    rectangulo_lleno(32 + x,28 + y,36 + x,44 + y);
    rectangulo_lleno(36 + x,28 + y,40 + x,44 + y);
    rectangulo_lleno(40 + x,24 + y,44 + x,48 + y);
    rectangulo_lleno(44 + x,20 + y,48 + x,54 + y);
    rectangulo_lleno(48 + x,24 + y,52 + x,48 + y);
}

void disparoNaveAzul(int x, int y) {
    color_rgb(80,110,255);
    rectangulo_lleno(x + 24, y, x + 28, y + 10);
}

void corazon(int x, int y){
	color(ROJO);
	// Ancho: 11 - Alto: 12
    rectangulo_lleno( 0 + x, 2 + y, 1 + x, 7 + y);
    rectangulo_lleno( 1 + x, 1 + y, 2 + x, 8 + y);
    rectangulo_lleno( 2 + x, 0 + y, 3 + x, 9 + y);
    rectangulo_lleno( 3 + x, 0 + y, 4 + x,10 + y);
    rectangulo_lleno( 4 + x, 1 + y, 5 + x,11 + y);
    // Centro: 5 - 6 x
    rectangulo_lleno( 5 + x, 2 + y, 6 + x,12 + y);
    rectangulo_lleno( 6 + x, 1 + y, 7 + x,11 + y);
    rectangulo_lleno( 7 + x, 0 + y, 8 + x,10 + y);
    rectangulo_lleno( 8 + x, 0 + y, 9 + x, 9 + y);
    rectangulo_lleno( 9 + x, 1 + y,10 + x, 8 + y);
    rectangulo_lleno(10 + x, 2 + y,11 + x, 7 + y);
}

int main() {
    vredimensiona(500, 500);
    int posXRoja = 220, posYRoja =  30; // Posición inicial de la nave roja
	int posXAzul = 220, posYAzul = 440; // Posición inicial de la nave azul
    int posXDisparoRoja = posXRoja, posYDisparoRoja = posYRoja + 58; // Posición inicial del disparo de la nave roja
    int posXDisparoAzul = posXAzul, posYDisparoAzul = posYAzul - 58; // Posición inicial del disparo de la nave azul
    bool disparoAzulActivo = false; 
    int t = tecla();
    int velocAzul = 10; // Velocidad inicial
    int contTiempo = 0, intervaloTiempo = 50; // Contador para tiempo
    int nivel = 1; // Nivel del juego
    int tiempoNivel = 0; // Contador de tiempo para cada nivel
    int vidas = 3; // Número inicial de vidas
    int puntos = 0;
    int radioExplosion = 0;
	int radioExplosionSec = 1;
	int radioExplosionTer = 1;
	
    while (t != ESCAPE) {
    	// Fondo
    	color_rgb(0,6,38);
    	rectangulo_lleno(0,0,500,500);
    	
        // Aumentar velocidad
        if (t == ARRIBA && velocAzul < 100) {
            velocAzul += 50;
        } else if (t == ABAJO && velocAzul > 50) {
            velocAzul -= 50;
        }
        
        color_rgb(0, 255, 0);
        // Mostrar datos: Puntos, Nivel y Vidas
        texto(  8, 8, "Puntos: " + aString(puntos));
        texto(200, 8, "NIVEL " + aString(nivel));  
		//texto(400, 8, "Vidas: " + aString(vidas));
		texto(392, 8, "Vidas: ");        
		for (int i = 0; i < vidas; i++) {
			corazon(440 + i * 20, 10); // Separación de 20
		}
		
        // Movimiento de la nave roja - enemigo
        int direccionRoja = rand() % 2; // Dirección aleatoria
        if (direccionRoja == 0 && posXRoja - 10 >= 0) {
    		posXRoja -= 10;
		} else if (direccionRoja == 1 && posXRoja + 10 <= 500 - 54) {
		    posXRoja += 10;
		}
		        
        // Movimiento del disparo de la nave roja
        if (posYDisparoRoja <= 500) {
            posYDisparoRoja += 10;
        } else if (posYDisparoRoja >= 490) {
        	posXDisparoRoja = posXRoja;
            posYDisparoRoja = posYRoja + 58;
        }
        
        // Movimiento de la nave azul
        if ((t == 'a' || t == 'A') && posXAzul - velocAzul >= 0) {
		    posXAzul -= velocAzul;
		} else if ((t == 'd' || t == 'D') && posXAzul + velocAzul <= 500 - 54) {
		    posXAzul += velocAzul;
		}

        // Movimiento del disparo de la nave azul
        if (t == ESPACIO && !disparoAzulActivo) {
            posXDisparoAzul = posXAzul;
            posYDisparoAzul = posYAzul;
            disparoAzulActivo = true;
        }
        if (disparoAzulActivo) {
            posYDisparoAzul -= 10;
            if (posYDisparoAzul < 0) {
                disparoAzulActivo = false;
            }
        }

        // Dibujar las naves - disparos
        naveAzul(posXAzul, posYAzul);
        naveRoja(posXRoja, posYRoja);
        disparoNaveRoja(posXDisparoRoja, posYDisparoRoja);
        if (disparoAzulActivo) {
            disparoNaveAzul(posXDisparoAzul, posYDisparoAzul);
        }
        
        // Dibujar la explosión
	    if (radioExplosion > 0) {
	        color_rgb(241, 139, 68); // Color de la explosión
	        circulo_lleno(posXAzul + 27, posYAzul + 29, radioExplosion);
	        radioExplosion++;
	        if(radioExplosion > 6){
	        	color_rgb(241, 204, 68); // Color de la explosión secundaria
	        	circulo_lleno(posXAzul + 27, posYAzul + 29, radioExplosionSec);
	        	radioExplosionSec++;
			}
			if(radioExplosion > 16){
	        	color_rgb(238, 231, 115); // Color de la explosión terciario
	        	circulo_lleno(posXAzul + 27, posYAzul + 29, radioExplosionTer);
	        	radioExplosionTer++;
			}
	        if (radioExplosion > 40) {
	            mensaje("GAME OVER");
	            vcierra();
	        }
	    }
    
        refresca();
        espera(intervaloTiempo);
		borra();
        t = tecla();
        contTiempo++;
        tiempoNivel++;

		// Colisión de la bala de la nave azul con la nave roja
		if (disparoAzulActivo && 
		    (posXDisparoAzul + 24 >= posXRoja && posXDisparoAzul + 28 <= posXRoja + 54) && 
		    (posYDisparoAzul >= posYRoja && posYDisparoAzul <= posYRoja + 58)) {
		    puntos++;
		    disparoAzulActivo = false;
		}

		// Colisión de la bala de la nave roja con la nave azul
		if ((posXDisparoRoja + 24 >= posXAzul && posXDisparoRoja + 28 <= posXAzul + 54) && 
		    (posYDisparoRoja >= posYAzul && posYDisparoRoja <= posYAzul + 58)) {
		    vidas--;
		    // Reiniciar la posición de la bala
		    posYDisparoRoja = posYRoja + 58;
		    posXDisparoRoja = posXRoja;
            if (vidas == 0) {
                // Iniciar la animación de la explosión
            	radioExplosion = 1;
            }
		}

        // Aumentar el nivel cada 10 segundos
        if (tiempoNivel == 200) { // 200 * 50ms = 10s
            nivel++;
            tiempoNivel = 0;
        }

        // Finaliza a los 30 segundos
        if (contTiempo == 10000 / intervaloTiempo) {
            intervaloTiempo -= 10;
            contTiempo = 0;
            if (intervaloTiempo <= 20) {
                mensaje("YOU WIN, GAME OVER");
                vcierra();
            }
        }
    }
    return 0;
}
