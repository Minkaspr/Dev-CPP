/*
	Realizar una clase en C++ con el nombre "FiguraRegular" 
	que tenga como atributos la cantidad de lados del polígono 
	y la medida de su lado. Además, un método que devuelva el 
	valor de su apotema. Los métodos deben validar que el 
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
    
    FiguraRegular figura(cantLados, medLado);
    
    if (figura.verificar()) {
        cout << "El apotema del poligono es: " << figura.apotema() << endl;
    } else {
        cout << "Los valores ingresados deben ser positivos." << endl;
    }
    
	return 0;
}
