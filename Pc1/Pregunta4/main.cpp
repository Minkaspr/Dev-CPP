/*
	De la clase anterior agregar que devuelva el perímetro y otro que 
	devuelva el área del polígono. Los métodos deben validar que el 
	usuario ingresa valores positivos.
*/

#include <iostream>
#include "FiguraRegular.cpp"
using namespace std;

int main(int argc, char** argv) {
	float cantLados, medLado;
    
    cout << "Ingrese la cantidad de lados del poligono: ";
    cin >> cantLados;
    
    cout << "Ingrese la medida de un lado del poligono: ";
    cin >> medLado;
    
    if (cantLados < 3) {
        cout << "El poligono debe tener al menos 3 lados." << endl;
        return 0;
    }
    
    FiguraRegular figura(cantLados, medLado);
    
    if (figura.verificar()) {
        cout << "El apotema del poligono es: " << figura.apotema() << endl;
        cout << "El perimetro del poligono es: " << figura.perimetro() << endl;
        cout << "El area del poligono es: " << figura.area() << endl;
    } else {
        cout << "Los valores ingresados deben ser positivos." << endl;
    }
    
	return 0;
}
