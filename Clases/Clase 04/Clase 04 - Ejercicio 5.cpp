/*
Suma de los primeros n enteros: Realiza una funci�n 
recursiva que sume los primeros n enteros positivos. 
Por ejemplo, si n es 5, la suma ser�a 1 + 2 + 3 + 4 + 5 = 15.
*/
#include<iostream>
using namespace std;

int suma(int n) {
    if(n == 0) {
        return 0;
    } else {
        return n + suma(n - 1);
    }
}

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    cout << "La suma de los primeros " << n << " enteros es: " << suma(n);
    return 0;
}
