#include "miniwin.h"
#include <cmath>

using namespace miniwin;

int main() {
    vredimensiona(500, 500);
	// ELIPSE 
    float semiejeMayor = 100;  // Semieje mayor
    float semiejeMenor = 50;   // Semieje menor
    float centroX = 0;         // Coordenada x del centro
    float centroY = 0;         // Coordenada y del centro

	color(VERDE);
    for (float angulo = 0; angulo <= 2 * M_PI; angulo += 0.01) {
        float x = centroX + semiejeMayor * cos(angulo);
        float y = centroY + semiejeMenor * sin(angulo);
        punto(250 + x, 250 - y);
    }
    
    refresca();
    return 0;
}
