/*
Escribe un programa que:

Pida al usuario un n�mero entero positivo.
Calcule y muestre la cantidad total de d�gitos en el n�mero.
Calcule y muestre la cantidad de d�gitos pares en el n�mero.
Calcule y muestre la cantidad de d�gitos impares en el n�mero.
*/
#include <iostream>
using namespace std;

int main(){  
    int num, cifra, cp = 0, ci = 0;    
    cout << "Ingrese un valor positivo: ";
    cin >> num;
    while(num > 0){
        cifra = num % 10;
        num /= 10;
        if (cifra % 2 == 0){
            cp++;
        } else {
            ci++;
        }
    }   
    cout << "Cifras: " << ci + cp << endl;
    cout << "Cifras pares: " << cp << endl;
    cout << "Cifras impares: " << ci << endl;
    
    return 0;
}

