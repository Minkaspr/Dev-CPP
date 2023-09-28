#include <iostream>
#include "miniwin.h"
using namespace std;
using namespace miniwin;

int main(){    
    vredimensiona(1300,450);
        
    color_rgb(255,127,39);
    rectangulo_lleno(5,5,140,360);
    
    color_rgb(181,230,29);
    rectangulo_lleno(140,5,590,360);
    
    color_rgb(255,242,0);
    rectangulo_lleno(590,5,630,360);
    
    color_rgb(237,28,36);
    rectangulo_lleno(630,5,690,360);
    rectangulo_lleno(630,85,890,165);
    
    rectangulo_lleno(890,45,940,265);
    
    color_rgb(181,230,29);
    rectangulo_lleno(940,45,1160,265);
    
    color_rgb(153,217,234);
    rectangulo_lleno(1160,45,1210,265);
    
    color(VERDE);
    texto(360,400,"EJERCICIO EN CLASE");
    linea(15,400,360,400);
    circulo(600,400,20);
    circulo_lleno(700,400,10);
    refresca();    
    return 0;
}
