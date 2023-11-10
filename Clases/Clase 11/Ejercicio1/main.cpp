#include "miniwin.h"
#include <iostream>
#include <sstream> 
#include <cstdlib>

using namespace std;
using namespace miniwin;

void avion(int x, int y){
	//raya cruzada
	color_rgb(150,0,2);
	rectangulo_lleno(8+x,30+y,42+x,40+y);
	
	//raya vertical izq
	color_rgb(150,0,2);
	rectangulo_lleno(2+x,25+y,6+x,50+y);
	
	//raya vertical der
	color_rgb(150,0,2);
	rectangulo_lleno(44+x,25+y,48+x,50+y);
	
	//izq punta izq
	color_rgb(150,0,2);
	rectangulo_lleno(0+x,20+y,2+x,37+y);
	
	//izq punta der
	color_rgb(150,0,2);
	rectangulo_lleno(6+x,20+y,8+x,37+y);
	
	//der punta izq
	color_rgb(150,0,2);
	rectangulo_lleno(42+x,20+y,44+x,37+y);
	
	//der punta der
	color_rgb(150,0,2);
	rectangulo_lleno(48+x,20+y,50+x,37+y);
	
	
	//centro
	color_rgb(255,191,192);
	rectangulo_lleno(15+x,25+y,35+x,50+y);
	
	//Frente
	color_rgb(255,191,192);
	rectangulo_lleno(18+x,10+y,32+x,25+y);
	
	//Frente medio
	color_rgb(150,0,2);
	rectangulo_lleno(23+x,3+y,27+x,20+y);
	
	//Frente medio izq
	color_rgb(150,0,2);
	rectangulo_lleno(17+x,3+y,21+x,15+y);
	color_rgb(150,0,2);
	rectangulo_lleno(17+x,2+y,19+x,3+y);
	rectangulo_lleno(19+x,1+y,21+x,2+y);
	rectangulo_lleno(21+x,0+y,23+x,1+y);
	//Frente medio der
	color_rgb(150,0,2);
	rectangulo_lleno(29+x,3+y,33+x,15+y);
	color_rgb(150,0,2);
	rectangulo_lleno(31+x,2+y,33+x,3+y);
	rectangulo_lleno(29+x,1+y,31+x,2+y);
	rectangulo_lleno(27+x,0+y,29+x,1+y);
	
	color_rgb(150,0,2);
	rectangulo_lleno(15+x,25+y,19+x,45+y);
	rectangulo_lleno(19+x,30+y,23+x,50+y);
	color_rgb(150,0,2);
	rectangulo_lleno(31+x,25+y,35+x,45+y);
	rectangulo_lleno(27+x,30+y,31+x,50+y);
	
	color_rgb(43,43,43);
	rectangulo_lleno(20+x,35+y,30+x,38+y);

}

void nave(int v, int z){
	//extremo izq
	color_rgb(62,255,24);
	rectangulo_lleno(0+v,10+15+z,1+v,30+15+z);
	color_rgb(62,255,24);
	rectangulo_lleno(1+v,5+15+z,2+v,20+15+z);
	
	color_rgb(62,255,24);
	rectangulo_lleno(2+v,0+15+z,3+v,15+15+z);
	
	//union izq
	color_rgb(62,255,24);
	rectangulo_lleno(3+v,5+15+z,5+v,10+15+z);
	
	//extremo medio izq
	color_rgb(62,255,24);
	rectangulo_lleno(5+v,15+z,6+v,30+z);
	color_rgb(62,255,24);
	rectangulo_lleno(6+v,13+z,7+v,28+z);
	color_rgb(62,255,24);
	rectangulo_lleno(7+v,11+z,8+v,26+z);
	color_rgb(62,255,24);
	rectangulo_lleno(8+v,10+z,9+v,25+z);
	
	//centro
	color_rgb(62,255,24);
	rectangulo_lleno(9+v,10+z,21+v,20+z);
	
	//extremo medio der
	
	color_rgb(62,255,24);
	rectangulo_lleno(25+v,15+z,24+v,30+z);
	
	color_rgb(62,255,24);
	rectangulo_lleno(24+v,13+z,23+v,28+z);
	
	color_rgb(62,255,24);
	rectangulo_lleno(23+v,11+z,22+v,26+z);
	
	color_rgb(62,255,24);
	rectangulo_lleno(22+v,10+z,21+v,25+z);
	
	//union der
	color_rgb(62,255,24);
	rectangulo_lleno(25+v,5+15+z,27+v,10+15+z);
	//extremo der
	color_rgb(62,255,24);
	rectangulo_lleno(27+v,0+15+z,28+v,15+15+z);
	
	color_rgb(62,255,24);
	rectangulo_lleno(28+v,5+15+z,29+v,20+15+z);
	
	color_rgb(62,255,24);
	rectangulo_lleno(29+v,10+15+z,30+v,30+15+z);

}

void misilNave(int x, int y){
	color_rgb(62,255,24);
	rectangulo_lleno(x+14,y,x+17,y+10);
}
void misilAvion(int x, int y){
    color(BLANCO);
    rectangulo_lleno(x+14,y,x+17,y+10);
}

int main(){
	vredimensiona(500,500);
	
	//variables cord
	int x = 200, y = 400; //Nave
	int xe = 100, ye = 10; //Enemigo1
	int mxe = 114, mye = 20; // Misil enemigo 1
	int t = tecla();
	int p,di; //Auxiliares mov enemigo
	int pp,dii;
	int ppp,diii;
	int ce=1,w,q;
	
	int balaX, balaY;
	bool balaActiva = false;
	
	int vidas = 3;

	while(t != ESCAPE){
		//movimiento avion
		if(t == IZQUIERDA && x>=20){
			x = x-15, y = y+0;	
		} else if(t == DERECHA && x<=430){
			x = x+15, y = y+0;
		} else if(t == ARRIBA && !balaActiva) {
            balaX = x;
            balaY = y;
            balaActiva = true; 
        }
        
        // Ataque
        if(balaActiva) {
            balaY -= 10; 
            misilAvion(balaX, balaY);
            if(balaY < 0) {
                balaActiva = false;
            }
        }

		//movimiento enemigo
		if (p==0){di=IZQUIERDA;}
		if (p==1){di=DERECHA;}
		//Valor aleatorio (cstdlib)
		p = rand()%50;
		if (di==IZQUIERDA && xe>=10){
			xe = xe-10, ye = ye+0;
		}else if(di==DERECHA && xe<=450){
			xe = xe+10, ye = ye+0;
		}
        
		//Misiles de la nave enemiga
		if(mye<=500){
			mye=mye+10;			
		}else if(mye>=490){
			mye=20;
			mxe=xe;
		}	
			
		if(mye>y && mye<=y+10 && mxe>=x && mxe<=x+30){
			for(int radio = 0; radio <= 30; radio += 5) {
            	color(ROJO);
	            circulo_lleno(mxe, mye, radio);
	            refresca();
	            espera(25);
	        	}
			vidas--;
			if(vidas == 0) {
                mensaje("GAME OVER");
                vcierra();
            } else {
            	stringstream ss;
				ss << "Te quedan " << vidas << " vidas.";
				mensaje(ss.str());
            }
		}
		
		avion(x,y);
		nave(xe,ye);
		misilNave(mxe,mye);
		refresca();
		espera(30);
		borra();
		t= tecla();
	}
	return 0;
}
