/*
Obtener el número hexadecimal de un número N: Para 
obtener el número hexadecimal de un número N, podemos 
dividir el número por 16 repetidamente y utilizar 
los restos para construir el número hexadecimal.
*/
#include<iostream>
using namespace std;

string intToString(int numero) {
    string cadena = "";
    if(numero == 0) {
        cadena = "0";
    } else {
        while(numero > 0) {
            char digito = '0' + (numero % 10);
            cadena = digito + cadena;
            numero /= 10;
        }
    }
    return cadena;
}

string hexadecimal(int n) {
    string resultado = "";
    while(n > 0) {
        int resto = n % 16;
        if(resto < 10) {
            resultado = intToString(resto) + resultado;
        } else {
            resultado = char('A' + resto - 10) + resultado;
        }
        n /= 16;
    }
    return resultado;
}

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    cout << "El numero hexadecimal de " << n << " es: " << hexadecimal(n) << endl;
    return 0;
}

