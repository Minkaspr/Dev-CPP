#include "miniwin.h"
#include <math.h>
using namespace miniwin;

//const float PI = 3.1416;
int main(){
    vredimensiona(400,400);
    while(1){
        for(double i=0; i < 2*M_PI; i+=0.1){
            circulo_lleno(200-100*sin(i),200+100*cos(i),20);
            refresca();
            espera(50);
            borra();
        }
    }
    return 0;
}
