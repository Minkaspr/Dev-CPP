/*
	Crear un programa en C++ que contenga una función que 
	recibe un número entre 1 y 100, y devuelve el valor 
	en número romano.
*/
#include <iostream>
#include <string>
using namespace std;

string convertirARomano(int n) {
    string unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string decenas[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    
    if (n >= 1 && n <= 100) {
        int unidad = n % 10;
        int decena = n / 10;
        
        return decenas[decena] + unidades[unidad];
    } else {
        return "Número inválido";
    }
}

int main() {
    int numero;
    cout << "Ingrese un número entre 1 y 100: ";
    cin >> numero;
    
    string numeroRomano = convertirARomano(numero);
    cout << "El número en romano es: " << numeroRomano << endl;
    
    return 0;
}

