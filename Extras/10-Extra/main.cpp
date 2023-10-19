#include "miniwin.h"
using namespace miniwin;

const int VENTANA_ANCHO = 400;
const int VENTANA_ALTO = 400;
const int CUADRADO_LADO = 20;

void cuadrado(int x, int y) {
    color(ROJO);
    rectangulo_lleno(x, y, x + CUADRADO_LADO, y + CUADRADO_LADO);
}

void dibujarCirculo(int &x, int y, int radio, bool &moviendo_derecha, float velocidad) {
    color(AMARILLO);
    circulo_lleno(x, y, radio);
    // Actualizar la velocidad y la posición
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
}

void dibujarRectangulo(int &x, int y, int altura, int longitud, bool &moviendo_derecha, float velocidad) {
    color(AZUL);
    rectangulo_lleno(x, y, x + longitud, y + altura);
    // Actualizar la velocidad y la posición
    if (moviendo_derecha) {
        x += velocidad;
    } else {
        x -= velocidad;
    }

    // Detectar y cambiar la dirección cuando alcanza los bordes
    if (x + longitud >= 400) {
        x = 400 - longitud;
        moviendo_derecha = false;
    } else if (x <= 0) {
        x = 0;
        moviendo_derecha = true;
    }
}

void manejarTeclas(int &posX, int &posY, int tecla) {
    if (tecla == DERECHA || tecla == int('d') || tecla == int('D')) {
        if (posX + CUADRADO_LADO + 5 <= VENTANA_ANCHO) {
            posX += 5;
        }
    }
    else if (tecla == IZQUIERDA || tecla == int('a') || tecla == int('A')) {
        if (posX - 5 >= 0) {
            posX -= 5;
        }
    }
    else if (tecla == ABAJO || tecla == int('s') || tecla == int('S')) {
        if (posY + CUADRADO_LADO + 5 <= VENTANA_ALTO) {
            posY += 5;
        }
    }
    else if (tecla == ARRIBA || tecla == int('w') || tecla == int('W')) {
        if (posY - 5 >= 0) {
            posY -= 5;
        }
    }
}

int main() {
    vredimensiona(VENTANA_ANCHO, VENTANA_ALTO);
    // Cirulo
    int x1 = 20, y1 = 50;
    int radio = 20;
    bool moviendo_circulo_der = true;
    // Rectangulo
    int x2 = 100, y2 = 100;
    int altura = 40, longitud = 120;
    bool moviendo_rectangulo_der = false;
    // Para dibujar
    float velocidad = 2.0;
    // Cuadrado
    int posX = (VENTANA_ANCHO - CUADRADO_LADO) / 2;
    int posY = (VENTANA_ALTO - CUADRADO_LADO) / 2;
	
    int t = tecla();
    while (t != ESCAPE) {
    	dibujarCirculo(x1, y1, radio, moviendo_circulo_der, velocidad);
    	dibujarRectangulo(x2,y2,altura,longitud,moviendo_rectangulo_der, velocidad);
    	dibujarCirculo(x1, 200, radio, moviendo_circulo_der, velocidad);
    	dibujarRectangulo(x2,300,altura,longitud,moviendo_rectangulo_der, velocidad);
        manejarTeclas(posX, posY,t);
        cuadrado(posX, posY);
        refresca();
        espera(16);
        borra();
        t = tecla();
    }
	mensaje("Has presionado la tecla 'ESC'\nSe detuvo la ejecucion...");
    return 0;
}

