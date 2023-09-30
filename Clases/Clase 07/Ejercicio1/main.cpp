#include "miniwin.h"
using namespace miniwin;
// Vertical
void triangulo_rectangulo_vIC(int xi, int yi, int altura, int base){
    for(int i = 0; i < base; i++){
        linea(xi, yi + i, xi + i, yi + i);
    }
}

void triangulo_rectangulo_vIIC(int xi, int yi, int altura, int base){
    for(int i = 0; i < base; i++){
        linea(xi + base - i, yi + i, xi + base, yi + i);
    }
}

void triangulo_rectangulo_vIIIC(int xi, int yi, int altura, int base){
    for(int i = 0; i < base; i++){
        linea(xi + i, yi + i, xi + base, yi + i);
    }
}

void triangulo_rectangulo_vIVC(int xi, int yi, int altura, int base){
    for(int i = 0; i < altura; i++){
        linea(xi, yi + i, xi + base - i - 1, yi + i);
    }
}

//horizontal
void triangulo_rectangulo_hIC(int xi, int yi, int altura, int base){
    for(int i = 0; i < base; i++){
        linea(xi + base - i, yi + base - i, xi + base - i, yi + base);
    }
}

void triangulo_rectangulo_hIIC(int xi, int yi, int altura, int base){
    for(int i = 0; i < base; i++){
        linea(xi + i, yi + base - i, xi + i, yi + base);
    }
}

void triangulo_rectangulo_hIIIC(int xi, int yi, int altura, int base){
    for(int i = 0; i < base; i++){
        linea(xi + i, yi, xi + i, yi + i);
    }
}

void triangulo_rectangulo_hIVC(int xi, int yi, int altura, int base){
    for(int i = 0; i < base; i++){
        linea(xi + i, yi, xi + i, yi + base - i);
    }
}

int main(){
    vredimensiona(800,800);
    // Vertical |
    color_rgb(255,150,0);
    for(int i=0;i<400;i++){
		linea(i,0,i,i);
	}
	for(int i=0;i<400;i++){
		linea(400+i,0,400+i,400-i);
	}
	// Horizontal -
	color_rgb(0,0,255);
	for(int i=0;i<400;i++){
		linea(i,i,i,400);
	}
	for(int i=0;i<400;i++){
		linea(0,400+i,400-i,400+i);
	}
	// Vertical |
	color_rgb(255,0,255);
	for(int i=0;i<200;i++){
		linea(i,800-i,i,800);
	}
	for(int i=0;i<200;i++){
		linea(200+i,600+i,200+i,800);
	}
	// Horizontal -
	color_rgb(255,255,0);
	for(int i=0;i<200;i++){
		linea(400-i,400+i,400,400+i);
	}
	for(int i=0;i<200;i++){
		linea(400,400+i,400+i,400+i);
	}
	for(int i=0;i<200;i++){
		linea(200+i,600+i,400,600+i);
	}
	for(int i=0;i<200;i++){
		linea(400,600+i,600-i,600+i);
	}
	// Vertical |
	color_rgb(100,0,155);
	for(int i=0;i<200;i++){
		linea(400+i,400-i,400+i,400+i);
	}
	// Horizontal -
	color(ROJO);
	for(int i=0;i<400;i++){
		linea(400+i,800-i,800,800-i);
	}
	// Vertical |
	color_rgb(0,255,0);
	for(int i=0;i<200;i++){
		linea(600+i,200-i,600+i,600-i);
	}
    refresca();
    return 0;
}

