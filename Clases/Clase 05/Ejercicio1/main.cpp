#include <iostream>
#include "Complejo.cpp"
using namespace std;

int main(int argc, char** argv) {
    float real, imaginario;
    
    cout << "Ingrese la parte real del numero complejo: ";
    cin >> real;
    
    cout << "Ingrese la parte imaginaria del numero complejo: ";
    cin >> imaginario;
    
    Complejo z1(real, imaginario);
    
    cout << "Parte entera: " << z1.get_real() << endl; 
    cout << "Parte imaginaria: " << z1.get_imaginario() << endl;
    
    z1.set_imaginario(4); 
    
    cout << "Parte entera: " << z1.get_real() << endl; 
    cout << "Parte imaginaria: " << z1.get_imaginario() << endl;
    
    return 0;
}

