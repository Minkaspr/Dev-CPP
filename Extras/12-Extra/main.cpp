#include "miniwin.h"
#include <cmath>

using namespace miniwin;
/*
Circunferencia: 
La ecuación de una circunferencia con centro en (h, k) y radio r es (x - h)² + (y - k)² = r². 
En términos de x e y, las coordenadas son x = h + r * cos(?) e y = k + r * sin(?), donde ? es el ángulo.

Elipse: 
La ecuación de una elipse con centro en (h, k), semieje mayor a y semieje menor b es (x - h)²/a² + (y - k)²/b² = 1. 
En términos de x e y, las coordenadas son x = h + a * cos(?) e y = k + b * sin(?), donde ? es el ángulo.

Parábola: 
La ecuación de una parábola con vértice en (h, k) y foco (h, k + p) es (x - h)² = 4p(y - k). 
En este caso, estamos usando una versión simplificada de esta ecuación para calcular y 
en función de x: y = a * (x - h)² + k.

Hipérbola:
La ecuación de una hipérbola con centro en (h, k), semieje mayor a y 
semieje menor b es (x - h)²/a² - (y - k)²/b² = 1 para la hipérbola horizontal y 
(y - k)²/a² - (x - h)²/b² = 1 para la hipérbola vertical.

En términos de x e y, las coordenadas son x = h ± a * cosh(t) e y = k + b * sinh(t) para la hipérbola horizontal,
 y x = h + a * sinh(t) e y = k ± b * cosh(t) para la hipérbola vertical, donde t es un parámetro que varía.
*/

void dibujarCircunferencia(int centroX, int centroY, float radio, int radioCirculo) {
    float velocidad = 1.0;  // Velocidad inicial
    float aceleracion = 0.01;  // Aceleración

    int vueltas = 0;  // Contador de vueltas
    while (vueltas < 5) {  // Cambia este número para controlar cuántas vueltas da el círculo
        for (float angulo = 270; angulo <= 270 + 360; angulo += velocidad) {
            float x = radio * cos(angulo * M_PI / 180);
            float y = radio * sin(angulo * M_PI / 180);

            circulo_lleno(centroX + x, centroY + y, radioCirculo);
            refresca();

            // Incrementar la velocidad en cada vuelta
            velocidad += aceleracion;  // Incrementar la velocidad gradualmente
            espera(10);  
            borra();
        }
        vueltas++;
    }
}

void dibujarElipse(int centroX, int centroY, float radioX, float radioY, int radioCirculo) {
    float velocidad = 1.0;  // Velocidad inicial
    float aceleracion = 0.01;  // Aceleración

    int vueltas = 0;  // Contador de vueltas
    while (vueltas < 5) {  // Cambia este número para controlar cuántas vueltas da el círculo
        for (float angulo = 180; angulo <= 180 + 360; angulo += velocidad) {
            float x = radioX * cos(angulo * M_PI / 180);
            float y = radioY * sin(angulo * M_PI / 180);

            circulo_lleno(centroX + x, centroY + y, radioCirculo);
            refresca();

            // Incrementar la velocidad en cada vuelta
            velocidad += aceleracion;  // Incrementar la velocidad gradualmente
            espera(10);  
            borra();
        }
        vueltas++;
    }
}


void dibujarParabola(int centroX, int centroY, float a, int radioCirculo) {
    float velocidad = 1.0;  // Velocidad inicial
    float aceleracion = 0.01;  // Aceleración

    bool derecha = true;  // Dirección del movimiento

	int vueltas = 0;  // Contador de vueltas
    while (vueltas < 5) {  // Cambia este número para controlar cuántas vueltas da el círculo
        if (derecha) {
            for (float x = 0; x <= centroX * 2; x += velocidad) {
                float y = a * pow(x - centroX, 2) + centroY;

                // Comprobar si el círculo está dentro de los límites de la ventana
                if (y >= radioCirculo && y <= centroY) {
                    circulo_lleno(x, y, radioCirculo);
                    refresca();

                    // Incrementar la velocidad en cada vuelta
                    velocidad += aceleracion;  // Incrementar la velocidad gradualmente
                    espera(10);  
                    borra();
                }
            }
            derecha = false;
        } else {
            for (float x = centroX * 2; x >= 0; x -= velocidad) {
                float y = a * pow(x - centroX, 2) + centroY;

                // Comprobar si el círculo está dentro de los límites de la ventana
                if (y >= radioCirculo && y <= centroY) {
                    circulo_lleno(x, y, radioCirculo);
                    refresca();

                    // Incrementar la velocidad en cada vuelta
                    velocidad += aceleracion;  // Incrementar la velocidad gradualmente
                    espera(10);  
                    borra();
                }
            }
            derecha = true;
        }
        vueltas++;
    }
}

/*
void dibujarHiperbola(float centroX, float centroY, float semiejeMayor, float semiejeMenor, int radioCirculo) {
    color(VERDE);
     for (float x = -200; x <= 200; x += 0.5) {
        float arg = (pow(x / semiejeMayor, 2) - 1) * pow(semiejeMenor, 2);
        if (arg < 0) {
            continue;
        }
        float y = sqrt(arg);
        // Dibujamos ambos círculos simultáneamente, cada uno en una rama diferente
        circulo_lleno(centroX + x, centroY + y, radioCirculo); 
        circulo_lleno(centroX - x, centroY + y, radioCirculo);
        refresca();
        espera(10);  
        borra();
    }
}
*/
void dibujarHiperbola(float centroX, float centroY, float semiejeMayor, float semiejeMenor, int radioCirculo) {
    color(VERDE);
    float dt = 0.01;  // Incremento para el parámetro t
    float velocidad = 0.01;  // Velocidad inicial
    float aceleracion = 0.001;  // Aceleración
    bool derecha = true;  // Dirección del movimiento
    int vueltas = 0;  // Contador de vueltas
    while (vueltas < 10) {  // Cambia este número para controlar cuántas vueltas da el círculo
        if (derecha) {
            for (float t = -1.5; t <= 1.5; t += velocidad) {
                float x = semiejeMayor * sinh(t);
                float y = semiejeMenor * cosh(t);
                if (centroX + x >= 10 && centroX + x <=390) {
					// Dibujamos ambos círculos simultáneamente, cada uno en una rama diferente
	                circulo_lleno(centroX + x, centroY + y, radioCirculo); // rama superior
	                circulo_lleno(centroX + x, centroY - y, radioCirculo); // rama inferior
	                refresca();
	                espera(10);  
	                borra();
				}
				velocidad += aceleracion;
            }
            derecha = false;
        } else {
            for (float t = 1.5; t >= -1.5; t -= velocidad) {
                float x = semiejeMayor * sinh(t);
                float y = semiejeMenor * cosh(t);
                
                if (centroX + x >= 10 && centroX + x <=390) {
					// Dibujamos ambos círculos simultáneamente, cada uno en una rama diferente
	                circulo_lleno(centroX + x, centroY + y, radioCirculo); // rama superior
	                circulo_lleno(centroX + x, centroY - y, radioCirculo); // rama inferior
	                refresca();
	                espera(10);  
	                borra();
				}
				velocidad -= aceleracion;
            }
            derecha = true;
        }
        vueltas++;
    }
}


int main() {
    vredimensiona(400, 400);
    //dibujarCircunferencia(200, 200, 100.0, 10);
    //dibujarElipse(200, 200, 100.0, 50.0, 10);
    //dibujarParabola(200, 300, -0.01, 10);
   	dibujarHiperbola(200, 200, 100.0, 50.0,10);
    return 0;
}

