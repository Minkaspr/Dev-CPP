#include "miniwin.h"
#include <string>
#include <sstream>

using namespace miniwin;
using namespace std;

inline string aString(int numero){
    ostringstream buffer;
    buffer<<numero;
    return buffer.str();
}

void mira(int x, int y, int ta){
    color(ROJO);
    circulo(x,y,ta);
    circulo(x,y,++ta);
    rectangulo_lleno(x-1,y-ta-10,x+1,y-10);    
    rectangulo_lleno(x-1,y+ta+10,x+1,y+10);    
    rectangulo_lleno(x+ta+10,y-1,x+10,y+1);
    rectangulo_lleno(x-ta-10,y-1,x-10,y+1);
}

int main(){    
    vredimensiona(500,500);
    int t = tecla();
    int posX = 0, posY = 0;
    
    while(t != ESCAPE){    	
    	// raton_dentro devuelve T o F
    	// dependiendo de la ubicación del puntero
        if (raton_dentro()){
            posX = raton_x(); //raton_x es la posición en X
            posY = raton_y(); //raton_y es la posición en Y
        }        
        
        borra();
        color(BLANCO);
        texto(10,10, "X = "+aString(posX));        
        texto(10,30, "Y = "+aString(posY));
                
        mira(posX,posY,20);
        //Click Izquierdo
        if(raton_boton_izq()){
            circulo_lleno(posX,posY,50);
        }
        //Click Derecho        
        if(raton_boton_der()){            
            mira(posX,posY,10);
        }
        
        refresca();
        espera(30);
        t = tecla();
    }
    vcierra();
    return 0;
}
