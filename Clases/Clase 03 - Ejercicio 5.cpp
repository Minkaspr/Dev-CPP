/*
Escribe un programa que haga lo siguiente:
Pida al usuario un n�mero entero y devuelva un array con los 
d�gitos que conforman el n�mero y tambien su forma invertida

tanto el numero y array deben ser de tipo int
*/
#include <iostream>
using namespace std;

// Funci�n para contar los d�gitos de un n�mero
int contarDigitos(int num) {
    int contador = 0;
    while(num != 0) {
        num /= 10;
        ++contador;
    }
    return contador;
}

// Funci�n para convertir un n�mero a un array de d�gitos
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

