#include "miniwin.h"
#include <cmath>

using namespace miniwin;
/*
Circunferencia: 
La ecuaci�n de una circunferencia con centro en (h, k) y radio r es (x - h)� + (y - k)� = r�. 
En t�rminos de x e y, las coordenadas son x = h + r * cos(?) e y = k + r * sin(?), donde ? es el �ngulo.

Elipse: 
La ecuaci�n de una elipse con centro en (h, k), semieje mayor a y semieje menor b es (x - h)�/a� + (y - k)�/b� = 1. 
En t�rminos de x e y, las coordenadas son x = h + a * cos(?) e y = k + b * sin(?), donde ? es el �ngulo.

Par�bola: 
La ecuaci�n de una par�bola con v�rtice en (h, k) y foco (h, k + p) es (x - h)� = 4p(y - k). 
En este caso, estamos usando una versi�n simplificada de esta ecuaci�n para calcular y 
en funci�n de x: y = a * (x - h)� + k.

Hip�rbola:
La ecuaci�n de una hip�rbola con centro en (h, k), semieje mayor a y 
semieje menor b es (x - h)�/a� - (y - k)�/b� = 1 para la hip�rbola horizontal y 
(y - k)�/a� - (x - h)�/b� = 1 para la hip�rbola vertical.

En t�rminos de x e y, las coordenadas son x = h � a * cosh(t) e y = k + b * sinh(t) para la hip�rbola horizontal,
 y x = h + a * sinh(t) e y = k � b * cosh(t) para la hip�rbola vertical, donde t es un par�metro que var�a.
*/

void dibujarCircunferencia(int centroX, int centroY, float radio, int radioCirculo) {
    float velocidad = 1.0;  // Velocidad inicial
    float aceleracion = 0.01;  // Aceleraci�n

    int vueltas = 0;  // Contador de vueltas
    while (vueltas < 5) {  // Cambia este n�mero para controlar cu�ntas vueltas da el c�rculo
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
    float aceleracion = 0.01;  // Aceleraci�n

    int vueltas = 0;  // Contador de vueltas
    while (vueltas < 5) {  // Cambia este n�mero para controlar cu�ntas vueltas da el c�rculo
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
    float aceleracion = 0.01;  // Aceleraci�n

    bool derecha = true;  // Direcci�n del movimiento

	int vueltas = 0;  // Contador de vueltas
    while (vueltas < 5) {  // Cambia este n�mero para controlar cu�ntas vueltas da el c�rculo
        if (derecha) {
            for (float x = 0; x <= centroX * 2; x += velocidad) {
                float y = a * pow(x - centroX, 2) + centroY;

                // Comprobar si el c�rculo est� dentro de los l�mites de la ventana
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

                // Comprobar si el c�rculo est� dentro de los l�mites de la ventana
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
        // Dibujamos ambos c�rculos simult�neamente, cada uno en una rama diferente
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
    float dt = 0.01;  // Incremento para el par�metro t
    float velocidad = 0.01;  // Velocidad inicial
    float aceleracion = 0.001;  // Aceleraci�n
    bool derecha = true;  // Direcci�n del movimiento
    int vueltas = 0;  // Contador de vueltas
    while (vueltas < 10) {  // Cambia este n�mero para controlar cu�ntas vueltas da el c�rculo
        if (derecha) {
            for (float t = -1.5; t <= 1.5; t += velocidad) {
                float x = semiejeMayor * sinh(t);
                float y = semiejeMenor * cosh(t);
                if (centroX + x >= 10 && centroX + x <=390) {
					// Dibujamos ambos c�rculos simult�neamente, cada uno en una rama diferente
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
					// Dibujamos ambos c�rculos simult�neamente, cada uno en una rama diferente
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

