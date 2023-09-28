/*
	Crear un programa en C++ que contenga una funci�n que 
	imprime todos los n�meros positivos menores que "n" 
	que son divisibles por 3 pero no por 5. 
	NOTA: "n" es el argumento de la funci�n 
*/

#include <iostream>
using namespace std;

void imprimirNumerosDivisibles(int n) {
    for (int i = 0; i <= n; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    imprimirNumerosDivisibles(n);
    return 0;
}

