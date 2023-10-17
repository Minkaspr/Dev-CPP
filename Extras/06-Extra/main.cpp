#include "miniwin.h"
#include <cmath>

using namespace miniwin;

int main() {
    vredimensiona(500, 500);
    
	// HIPÉRBOLA 
    float semiejeMayor = 100;  // Semieje mayor
    float semiejeMenor = 50;   // Semieje menor
    float centroY = -4;        // Coordenada y del centro

	color(VERDE);
    for (float y = -250; y <= 250; y += 0.01) {
        float x = sqrt((pow(y + centroY, 2) / pow(semiejeMenor, 2) + 1) * pow(semiejeMayor, 2));
        // Graficamos para x positivos
        punto(250 + x, 250 - y);
        // Graficamos para x negativos
        punto(250 - x, 250 - y);
    }
    
    color(AZUL);
    float centroX = 4;
    for (float x = -250; x <= 250; x += 0.01) {
        float y = sqrt((pow(x - centroX, 2) / pow(semiejeMayor, 2) - 1) * pow(semiejeMenor, 2));
        // Graficamos para x positivos
        punto(250 + y, 250 - x);
        // Graficamos para x negativos
        punto(250 - y, 250 - x);
    }
    refresca();
    return 0;
}



