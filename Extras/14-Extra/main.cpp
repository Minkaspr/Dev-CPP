#include "miniwin.h"
using namespace miniwin;

void naveEnemiga(){
	color_rgb(225,225,225);
    rectangulo_lleno(0,4,4,28);
    rectangulo_lleno(4,12,8,24);
    rectangulo_lleno(8,8,12,40);
    rectangulo_lleno(12,16,16,36);
    rectangulo_lleno(16,0,20,12);
    rectangulo_lleno(16,20,20,48);
    rectangulo_lleno(20,4,24,16);
    rectangulo_lleno(20,24,24,54);
    // Centro de la nave
    rectangulo_lleno(24,8,28,32);
    rectangulo_lleno(24,44,28,58);
    rectangulo_lleno(28,4,32,16);
    rectangulo_lleno(28,24,32,54);
    rectangulo_lleno(32,0,36,12);
    rectangulo_lleno(32,20,36,48);
    rectangulo_lleno(36,16,40,36);
    rectangulo_lleno(40,8,44,40);
    rectangulo_lleno(44,12,48,24);
    rectangulo_lleno(48,4,52,28);
}

void naveAmiga(){
	color_rgb(185,185,185);
    rectangulo_lleno(0,24,4,48);
    rectangulo_lleno(4,20,8,54);
    rectangulo_lleno(8,24,12,48);
    rectangulo_lleno(12,28,16,44);
    rectangulo_lleno(16,28,20,44);
    rectangulo_lleno(20,4,24,52);
    rectangulo_lleno(24,0,28,12);
    // Centro de la nave
    rectangulo_lleno(24,24,28,58);
    rectangulo_lleno(28,4,32,52);
    rectangulo_lleno(32,28,36,44);
    rectangulo_lleno(36,28,40,44);
    rectangulo_lleno(40,24,44,48);
    rectangulo_lleno(44,20,48,54);
    rectangulo_lleno(48,24,52,48);
}

void corazon_22(){
	color(ROJO);
    rectangulo_lleno(0,4,2,14);
    rectangulo_lleno(2,2,4,16);
    rectangulo_lleno(4,0,6,18);
    rectangulo_lleno(6,0,8,20);
    rectangulo_lleno(8,2,10,22);
    rectangulo_lleno(10,4,12,24);
    rectangulo_lleno(12,2,14,22);
    rectangulo_lleno(14,0,16,20);
    rectangulo_lleno(16,0,18,18);
    rectangulo_lleno(18,2,20,16);
    rectangulo_lleno(20,4,22,14);
}

void corazon_10(){
	color(ROJO);
    rectangulo_lleno(0,2,1,7);
    rectangulo_lleno(1,1,2,8);
    rectangulo_lleno(2,0,3,9);
    rectangulo_lleno(3,0,4,10);
    rectangulo_lleno(4,1,5,11);
    rectangulo_lleno(5,2,6,12);
    rectangulo_lleno(6,1,7,11);
    rectangulo_lleno(7,0,8,10);
    rectangulo_lleno(8,0,9,9);
    rectangulo_lleno(9,1,10,8);
    rectangulo_lleno(10,2,11,7);
}

int main() {
    vredimensiona(500, 500);
	refresca();
    return 0;
}
