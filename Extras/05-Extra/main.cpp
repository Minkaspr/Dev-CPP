#include "miniwin.h"
using namespace miniwin;

int main() {
    vredimensiona(400, 400);
    int t = tecla();
    int x = 20, y = 200;
    int radio = 20;
    float velocidad = 2.0;
    float aceleracion = 0.02;

    bool moviendo_derecha = true;

    while (t != ESCAPE) {
        borra();
        color(AMARILLO);
        circulo_lleno(x, y, radio);
        refresca();

		// Actualizar la velocidad y la posición
        velocidad += aceleracion;
        if (moviendo_derecha) {
            x += velocidad;
        } else {
            x -= velocidad;
        }

		// Detectar y cambiar la dirección cuando alcanza los bordes
        if (x + radio >= 400) {
            x = 400 - radio;
            moviendo_derecha = false;
        } else if (x - radio <= 0) {
            x = 0 + radio;
            moviendo_derecha = true;
        }

        espera(16);
        t = tecla();
    }

    return 0;
}


