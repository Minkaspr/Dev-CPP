#include "miniwin.h"
#include <math.h>
using namespace miniwin;

void figuras(int numero){
    switch(numero){
        case 0:
            circulo_lleno(200,200,10);
            break;
        case 1:
            circulo_lleno(200,200,30);
            break;
        case 2:
            circulo_lleno(200,200,20);
            break;
        case 3:
            circulo_lleno(200,200,50);
            break;
        case 4:
            circulo_lleno(200,200,70);
            break;
        case 5:
            circulo_lleno(200,200,100);
            break;
        case 6:
            circulo_lleno(200,200,5);
            break;
        case 7:
            circulo_lleno(200,200,30);
            break;
        case 8:
            circulo_lleno(200,200,90);
            break;
        case 9:
            circulo_lleno(200,200,50);
            break;
    }
}

int main(){
    vredimensiona(400,400);

    for(int i=0; i<=9;i++){    
        figuras(i);
        refresca();
        espera(250);
        borra();
    }
    // Limpia pantalla
    refresca();
    return 0;
}
