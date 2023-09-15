/*
Comprobar si un n�mero est� ordenado de forma decreciente 
y creciente: Para comprobar si un n�mero est� ordenado de 
forma decreciente y creciente, podemos comparar cada d�gito
 con el siguiente. Si los d�gitos est�n en orden creciente, 
 entonces el n�mero est� ordenado de forma creciente. 
 Si los d�gitos est�n en orden decreciente, entonces 
 el n�mero est� ordenado de forma decreciente. 
 Si los d�gitos no est�n en ning�n orden en particular, 
 entonces el n�mero no est� ordenado.
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

