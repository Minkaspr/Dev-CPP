/*
Ejercicio #2:
Escribir una función que convierta un número decimal en 
binario y otra que convierta un número binario en decimal.
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
    
    cout << "Introduce un número decimal: ";
    cin >> numDecimal;
    cout << "El número decimal "<<numDecimal<<" en binario es: "<<decimalABinario(numDecimal)<<endl;
    cout << "Introduce un número binario: ";
    cin >> numBinario;
    cout << "El número binario "<< numBinario<<" en decimal es: "<< binarioADecimal(numBinario)<<endl;

    return 0;
}
