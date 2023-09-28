/*
Escribe un programa que haga lo siguiente:
Pida al usuario un número entero y devuelva un array con los 
dígitos que conforman el número y tambien su forma invertida

tanto el numero y array deben ser de tipo int
*/
#include <iostream>
using namespace std;

// Función para contar los dígitos de un número
int contarDigitos(int num) {
    int contador = 0;
    while(num != 0) {
        num /= 10;
        ++contador;
    }
    return contador;
}

// Función para convertir un número a un array de dígitos
void numeroADigitos(int num, int digitos[], int numDigitos) {
    for(int i = numDigitos - 1; i >= 0; --i) {
        digitos[i] = num % 10;
        num /= 10;
    }
}

int main() {  
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    int numDigitos = contarDigitos(num);
    int digitos[numDigitos];
    
    numeroADigitos(num, digitos, numDigitos);
    
    cout << "Los digitos del numero son: ";
    for(int i = 0; i < numDigitos; i++) {
        cout << digitos[i] << " ";
    }
    cout << endl;

    cout << "Los digitos del numero en orden inverso son: ";
    for(int i = numDigitos - 1; i >= 0; i--) {
        cout << digitos[i] << " ";
    }
    
    cout << endl;

    return 0;
}

