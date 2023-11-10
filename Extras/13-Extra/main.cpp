#include "miniwin.h"
#include <cstdlib>
#include <sstream>
using namespace std;
using namespace miniwin;

inline string aString(int numero){
    ostringstream buffer;
    buffer << numero;
    return buffer.str();
}

void naveRojo(int x, int y) {
    color_rgb(255, 0, 0);
    rectangulo_lleno(x, y, x + 30, y + 30);
}

void disparoNaveRojo(int x, int y) {
    color_rgb(0, 255, 0);
    rectangulo_lleno(x + 14, y, x + 16, y + 10);
}

void naveAzul(int x, int y) {
    color_rgb(0, 0, 255);
    rectangulo_lleno(x, y, x + 30, y + 30);
}

int main() {
    vredimensiona(500, 500);

    int posXAzul = 200, posYAzul = 400; // Posición inicial de la nave azul
    int posXRoja = 100, posYRoja = 20; // Posición inicial de la nave roja
    int posXDisparoRoja = posXRoja, posYDisparoRoja = posYRoja + 30; // Posición inicial del disparo de la nave roja
    int t = tecla();
    int velocAzul = 15; // Velocidad inicial
    int contTiempo = 0, intervaloTiempo = 50; // Contador para tiempo
    int nivel = 1; // Nivel del juego
    int tiempoNivel = 0; // Contador de tiempo para cada nivel
    int vidas = 3; // Número inicial de vidas

    while (t != ESCAPE) {
        // Aumentar velocidad
        if (t == ARRIBA && velocAzul < 100) {
            velocAzul += 50;
        } else if (t == ABAJO && velocAzul > 50) {
            velocAzul -= 50;
        }
        
        // Mostrar el nivel y vidas
        texto(200, 5, "NIVEL " + aString(nivel));  
		texto(400, 5, "Vidas: " + aString(vidas));    

        // Movimiento de la nave roja - enemigo
        int direccionRoja = rand() % 2; // Dirección aleatoria
        if (direccionRoja == 0 && posXRoja >= 10) {
            posXRoja -= 10;
        } else if (direccionRoja == 1 && posXRoja <= 450) {
            posXRoja += 10;
        }
        
        // Movimiento del disparo de la nave roja
        if (posYDisparoRoja <= 500) {
            posYDisparoRoja += 10;
        } else if (posYDisparoRoja >= 490) {
            posYDisparoRoja = posYRoja + 30;
            posXDisparoRoja = posXRoja;
        }
        
        // Movimiento de la nave azul
        if ((t == 'a' || t == 'A') && posXAzul >= 5 + velocAzul) {
            posXAzul -= velocAzul;
        } else if ((t == 'd' || t == 'D') && posXAzul <= 445 - velocAzul) {
            posXAzul += velocAzul;
        }

        // Dibujar las naves
        naveAzul(posXAzul, posYAzul);
        naveRojo(posXRoja, posYRoja);
        disparoNaveRojo(posXDisparoRoja, posYDisparoRoja);
        refresca();
        espera(intervaloTiempo);
		borra();
        t = tecla();
        contTiempo++;
        tiempoNivel++;

		// Colisión
		if ((posXDisparoRoja + 14 >= posXAzul && posXDisparoRoja + 16 <= posXAzul + 30) && 
		    (posYDisparoRoja >= posYAzul && posYDisparoRoja <= posYAzul + 30)) {
		    vidas--;
            if (vidas == 0) {
                mensaje("GAME OVER");
                vcierra();
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




