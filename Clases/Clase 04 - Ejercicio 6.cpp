/*
Potencia: Realiza una funci�n recursiva que calcule 
la potencia a^b donde a y b son n�meros enteros positivos.
*/
#include<iostream>
using namespace std;

int potencia(int a, int b) {
    if(b == 0) {
        return 1;
    } else {
        return a * potencia(a, b - 1);
    }
}

int main() {
    int a, b;
    cout << "Ingrese dos n�meros enteros positivos: ";
    cin >> a >> b;
    cout << a << "^" << b << " = " << potencia(a, b);
    return 0;
}

