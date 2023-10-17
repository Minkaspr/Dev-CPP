#include "miniwin.h"
using namespace miniwin;

int main(){
    vredimensiona(400,400);
    int t = tecla();
    while(t != ESCAPE){    	
    	//Definimos el color
	    color(AMARILLO);
	    //Creamos un bucle finito incremental
	    for(int i=10; i < 100; i=i+5){
	        //Dibujamos un circulo con relleno
	        circulo_lleno(200,200,i);
	        //Refrescamos la pantalla
	        refresca();
	        //Hacemos una pausa
	        espera(150);
	        //Borramos el gráfico
	        borra();
	    }
	    //Creamos un bucle finito con decrecimiento
	    for(int i=100; i > 10; i=i-5){
	        //Dibujamos un circulo con relleno
	        circulo_lleno(200,200,i);
	        //Refrescamos la pantalla
	        refresca();
	        //Hacemos una pausa
	        espera(150);
	        //Borramos el gráfico
	        borra();
	    }	
	    t=tecla();
	}    
    return 0;
}
