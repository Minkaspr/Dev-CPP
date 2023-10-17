#include "miniwin.h"
using namespace miniwin;

int main(){
    vredimensiona(400,400);
    for(int i=10; i < 300; i=i+1){
        rectangulo_lleno(i,200,i+100,220);
        rectangulo_lleno(i+50,240,i+150,260);
        rectangulo_lleno(400-i,280,500-i,300);
        rectangulo_lleno(i+70,320,i+170,340);
        rectangulo_lleno(i+120,360,i+220,380);
        refresca();
        espera(20);
        borra();
    }
    return 0;
}
