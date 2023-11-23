#include "miniwin.h"
#include <math.h>
using namespace miniwin;

int main(){
    vredimensiona(500,500);
    int n = 8;
    int x = 250,y = 250;
    int dis = 200;
    
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
