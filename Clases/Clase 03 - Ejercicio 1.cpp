/*
Ejercicio #1:
Escribir una función que calcule el máximo común divisor 
de dos números y otra que calcule el mínimo común múltiplo.
*/
#include <iostream>
using namespace std;
int calcularMCD(int num1, int num2) {
    int mcd = 1;
    int aux = (num1 < num2) ? num2 : num1;
    for(int i = 2; i <= aux; i++) {
        while(num1 % i == 0 && num2 % i == 0) {
            num1 /= i;
            num2 /= i;
            mcd *= i;
        }
    }
    return mcd;
}

int calcularMCM(int num1, int num2) {
    int mcm = max(num1, num2);
    bool encontrado = false;
    for (int i = mcm; !encontrado; ++i) {
        if(i % num1 == 0 && i % num2 == 0) {
            mcm = i;
            encontrado = true;
        }
    }
    return mcm;
}

int main(){
	int num1, num2;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    cout << "El Maximo Comun Divisor de " <<num1<<" y "<<num2<<" es: "<<calcularMCD(num1, num2)<<endl;
    cout << "El Minimo Comun Multiplo de " <<num1<<" y "<<num2<<" es: "<<calcularMCM(num1, num2)<<endl;
	return 0;
}

/*
	Con Recursividad
	int calcularMCD(int num1, int num2) {
	    if (num2 == 0) {
	        return num1;
	    } else {
	        return calcularMCD(num2, num1 % num2);
	    }
	}

	int calcularMCM(int num1, int num2) {
    	int mcm = (num1 * num2) / calcularMCD(num1, num2);
    return mcm;
    -------------------------------------------
    Con while
    int calcularMCD(int num1, int num2) {
	    while(num2 != 0) {
	        int temp = num2;
	        num2 = num1 % num2;
	        num1 = temp;
	    }
	    return num1;
	}

	int calcularMCM(int num1, int num2) {
	    int mcm = max(num1, num2);
	    while(true) {
	        if(mcm % num1 == 0 && mcm % num2 == 0)
	            break;
	        ++mcm;
	    }
	    return mcm;
	}
}

*/
