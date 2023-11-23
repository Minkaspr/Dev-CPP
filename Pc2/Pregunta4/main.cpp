/*
Construir un programa en C++ que dibuje un hexágono regular dentro
de una circunferencia. (4 puntos)
Restricciones:
- Emplear MiniWin
- La ventana debe ser de 500x500
- La figura debe estar rellena
*/
#include "miniwin.h"
#include <math.h>
using namespace miniwin;

int main(){
    vredimensiona(400,400);
    int n = 6;
    int x = 200,y = 200;
    int dis = 100;
    
    color(ROJO);
    circulo_lleno(200,200,100);
    
    color(BLANCO);
    for(int i=0; i<=dis;i++){    
        for(float a=0; a<2*M_PI; a+=(2*M_PI/n)){
            linea(x+cos(a)*i,y+sin(a)*i,
            x+cos(a+2*M_PI/n)*i,
            y+sin(a+2*M_PI/n)*i);
        }
    }
    
    refresca();
    return 0;
}
