/*
Comprobar si un número está ordenado de forma decreciente 
y creciente: Para comprobar si un número está ordenado de 
forma decreciente y creciente, podemos comparar cada dígito
 con el siguiente. Si los dígitos están en orden creciente, 
 entonces el número está ordenado de forma creciente. 
 Si los dígitos están en orden decreciente, entonces 
 el número está ordenado de forma decreciente. 
 Si los dígitos no están en ningún orden en particular, 
 entonces el número no está ordenado.
*/
#include<iostream>
using namespace std;

bool estaOrdenado(int n) {
    bool creciente = true;
    bool decreciente = true;
    int anterior = n % 10;
    n /= 10;
    while(n > 0 && (creciente || decreciente)) {
        int actual = n % 10;
        if(actual > anterior) {
            decreciente = false;
        } else if(actual < anterior) {
            creciente = false;
        }
        anterior = actual;
        n /= 10;
    }
    return creciente || decreciente;
}

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    if(estaOrdenado(n)) {
        cout << "El numero " << n << " esta ordenado." << endl;
    } else {
        cout << "El numero " << n << " no esta ordenado." << endl;
    }
    return 0;
}

