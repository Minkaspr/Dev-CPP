#include "miniwin.h"
#include <cmath>
using namespace miniwin;

// Método para generar una parábola utilizando la fórmula y = a * x^2
void generarParabolaCuadratica(float coeficiente_a, int radio_circulo, int rango_x_inicial, int rango_x_final) {
    for (int x = rango_x_inicial; x <= rango_x_final; x++) {
        int y = coeficiente_a * x * x;
        circulo_lleno(x + 200, 200 - y, radio_circulo);
        refresca();
        espera(50);
        borra();
    }
}

// Método para generar una parábola utilizando una oscilación senoidal
void generarParabolaSenoidal(float amplitud, float frecuencia, int radio_circulo, int rango_x_inicial, int rango_x_final) {
    for (int x = rango_x_inicial; x <= rango_x_final; x++) {
        float y = amplitud * sin(frecuencia * x);
        circulo_lleno(x + 200, 200 - y, radio_circulo);
        refresca();
        espera(50);
        borra();
    }
}

// Método para generar una elipse
void dibujarElipse(float semiejeMayor, float semiejeMenor, int radioCirculo) {
    for (float angulo = 0; angulo <= 2 * M_PI; angulo += 0.1) {
        float x = semiejeMayor * cos(angulo);
        float y = semiejeMenor * sin(angulo);

        circulo_lleno(200 + x, 200 + y, radioCirculo);
        refresca();
        espera(50);
        borra();
    }
}


// Método para dibujar una circunferencia
void dibujarCircunferencia(int centroX, int centroY, float radio, int radioCirculo) {
    for (float angulo = 0; angulo <= 2 * M_PI; angulo += 0.01) {
        float x = radio * cos(angulo);
        float y = radio * sin(angulo);

        circulo_lleno(centroX + x, centroY + y, radioCirculo);
        refresca();
        espera(10);
        borra();
    }
}

// a <> apertura_eje_x - b <> apertura_eje_y
void dibujarHiperbola(int centroX, int centroY, float apertura_eje_x, float apertura_eje_y, int radio_circulo) {
    for (float x = -apertura_eje_x + 1; x < apertura_eje_x; x += 1) { 
        float y1 = apertura_eje_y * sqrt(1 + (x * x) / (apertura_eje_x * apertura_eje_x));
        float y2 = -y1;
        circulo_lleno(centroX + x, centroY + y1, radio_circulo);
        circulo_lleno(centroX + x, centroY + y2, radio_circulo);
        refresca();
        espera(50);
        borra();
    }
}

int main() {
    vredimensiona(400, 400);

    generarParabolaCuadratica(0.05, 10, -60, 60);
    espera(1000);

    generarParabolaSenoidal(100.0, 0.1, 10, -100, 100);
    espera(1000);  
    
    dibujarElipse(100.0, 50.0, 10);
	espera(1000);  
	
	dibujarCircunferencia(200, 200, 100.0, 10);
	espera(1000);  
	
	dibujarHiperbola(200, 200, 100.0, 50.0, 10);
	espera(1000);
	
    return 0;
}

