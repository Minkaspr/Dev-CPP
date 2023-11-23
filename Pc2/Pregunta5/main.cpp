/*
Crear un programa en MiniWin que simule a la luna girando 
alrededor de la tierra.(4 puntos)
Restricciones:
-Emplear MiniWin
-La ventana debe ser de 500x500
-La trayectoria debe ser elíptica con radios en relación 3 a 5
*/
#include "miniwin.h";
#include <cmath>
using namespace miniwin;
int VENTANA_ANCHO = 500;
int VENTANA_ALTO = 500;
int RADIO_LUNA = 3*4;
float RADIO_PLANETA = 5*4;
void luna(int centroX, int centroY, float semiejeMayor, float semiejeMenor, int radioCirculo) {
	float velocidad = 1.0; 
	int vueltas = 0; 
	while (vueltas < 2) { 
		for (float angulo = 180; angulo <= 180 + 360; angulo += velocidad) {
			float x = semiejeMayor * cos(angulo * M_PI / 180);
			float y = semiejeMenor * sin(angulo * M_PI / 180);
			color(AZUL);
			circulo_lleno(VENTANA_ANCHO/2,VENTANA_ALTO/2,RADIO_PLANETA);
			color(BLANCO);
			circulo_lleno(centroX + x, centroY + y, radioCirculo);
			refresca();
			espera(10); 
			borra();
		}
	}
}
int main(){
	float semiejeMayor = 50*2.5;
	float semiejeMenor = 50*1.5;
	vredimensiona(VENTANA_ANCHO,VENTANA_ALTO);
	luna(VENTANA_ANCHO/2,VENTANA_ALTO/2, semiejeMayor, 
	semiejeMenor, RADIO_LUNA);
	refresca();
	return 0;
}
