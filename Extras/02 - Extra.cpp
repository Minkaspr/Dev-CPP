/*
Comprobar si un número es binario: Para comprobar si un 
número es binario, podemos dividir el número por 10 
repetidamente y comprobar si el resto es siempre 0 o 1.
*/
#include<iostream>
using namespace std;

bool esBinario(int n) {
    while(n > 0) {
        int resto = n % 10;
        if(resto != 0 && resto != 1) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    if(esBinario(n)) {
        cout << "El numero " << n << " es binario." << endl;
    } else {
        cout << "El numero " << n << " no es binario." << endl;
    }
    return 0;
}

