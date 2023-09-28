/*
Escribe un programa que haga lo siguiente:

Pida al usuario un número entero y devuelva un array con los 
dígitos que conforman el número y tambien su forma invertida
Pida al usuario una palabra y devuelva un array con las 
letras de la palabra y tambien su forma invertida
Verifique si la palabra ingresada es un palíndromo 
(una palabra que se lee igual de izquierda a derecha que de derecha a izquierda).
Verifique cuantas vocales contiene la palabra

Version 2
*/
#include <iostream>
using namespace std;

// Función para convertir un número en una cadena de dígitos
string numeroADigitos(int num) {
    if(num == 0) return "0";
    
    string digitos = "";
    while(num > 0) {
        char digito = '0' + num % 10;
        digitos = digito + digitos;
        num /= 10;
    }
    return digitos;
}

// Función para invertir una cadena
string invertirCadena(string cadena) {
    string invertida = "";
    for(int i = cadena.length() - 1; i >= 0; i--) {
        invertida += cadena[i];
        if(i > 0 && cadena[i-1] != ' ') {
            invertida += " ";
        }
    }
    return invertida;
}

// Función para verificar si una palabra es un palíndromo
bool esPalindromo(string palabra) {
    string invertida = invertirCadena(palabra);
    return palabra == invertida;
}

// Función para contar las vocales en una palabra
int contarVocales(string palabra) {
    int vocales = 0;
    for(int i = 0; i < palabra.length(); i++) {
        char letra = tolower(palabra[i]);
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            vocales++;
        }
    }
    return vocales;
}

int main() {  
    int num;
    string palabra;

    cout << "Ingrese un numero: ";
    cin >> num;
    string digitos = numeroADigitos(num);
    
    cout << "Los digitos del numero son: ";
    for(int i = 0; i < digitos.length(); i++) {
        cout << digitos[i] << " ";
    }
    string numInvertido = invertirCadena(digitos);
    cout << endl;
    
    cout << "Los digitos del numero en orden inverso son: ";
    for(int i = 0; i < numInvertido.length(); i++) {
        cout << numInvertido[i];
    }
    cout << endl;
    
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    
    cout << "Las letras de la palabra son: ";
    for(int i = 0; i < palabra.length(); i++) {
        cout << palabra[i] << " ";
    }
    cout << endl;

    string palabraInvertida = invertirCadena(palabra);
    
    cout << "Las letras de la palabra en orden inverso son: ";
    for(int i = 0; i < palabraInvertida.length(); i++) {
        cout << palabraInvertida[i];
    }
    cout << endl;

    if(esPalindromo(palabra)) {
        cout << "La palabra es un palindromo." << endl;
    } else {
        cout << "La palabra no es un palindromo." << endl;
    }

    cout << "La cantidad de vocales en la palabra es: " << contarVocales(palabra) << endl;

    return 0;
}


