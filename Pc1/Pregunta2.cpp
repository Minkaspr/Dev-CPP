/*
	Crear un programa en C++ que contenga una funci�n que 
	recibe un n�mero entre 1 y 100, y devuelve el valor 
	en n�mero romano.
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
        return "N�mero inv�lido";
    }
}

int main() {
    int numero;
    cout << "Ingrese un n�mero entre 1 y 100: ";
    cin >> numero;
    
    string numeroRomano = convertirARomano(numero);
    cout << "El n�mero en romano es: " << numeroRomano << endl;
    
    return 0;
}

