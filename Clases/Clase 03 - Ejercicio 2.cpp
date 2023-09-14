/*
Ejercicio #2:
Escribir una funci�n que convierta un n�mero decimal en 
binario y otra que convierta un n�mero binario en decimal.
*/
#include <iostream>
using namespace std;

string decimalABinario(int numDecimal) {
    string numBinario = "";
    while(numDecimal > 0) {
        numBinario = to_string(numDecimal % 2) + numBinario;
        numDecimal /= 2;
    }
    return numBinario;
}

int binarioADecimal(string numBinario) {
    int numDecimal = 0;
    int base = 1;
    int longitud = numBinario.length();
    for(int i = longitud - 1; i >= 0; i--) {
        if(numBinario[i] == '1') {
            numDecimal += base;
        }
        base *= 2;
    }
    return numDecimal;
}

int main() {
    int numDecimal;
    string numBinario;
    
    cout << "Introduce un n�mero decimal: ";
    cin >> numDecimal;
    cout << "El n�mero decimal "<<numDecimal<<" en binario es: "<<decimalABinario(numDecimal)<<endl;
    cout << "Introduce un n�mero binario: ";
    cin >> numBinario;
    cout << "El n�mero binario "<< numBinario<<" en decimal es: "<< binarioADecimal(numBinario)<<endl;

    return 0;
}
