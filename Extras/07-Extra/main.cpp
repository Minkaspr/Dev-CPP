#include "miniwin.h"
#include <cmath>

using namespace miniwin;

int main() {
    vredimensiona(500, 500);

	// PARÁBOLA 
    float a = 0.01;  // Coeficiente de x^2
    float b = 0;     // Coeficiente de x
    float c = 0;     // Término constante

	color(VERDE);
    for (float x = -250; x <= 250; x += 0.01) {
        float y = a * pow(x, 2) + b * x + c;
        punto(250 + x, 250 - y);
    }
    
    refresca();
    return 0;
}
