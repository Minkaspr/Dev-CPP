/*
Ejercicio
Conversión de grados Celsius a Fahrenheit: Pide al usuario 
que ingrese una temperatura en grados Celsius y la convierte 
a grados Fahrenheit.
*/
#include<iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    float fahrenheit = (9.0/5.0) * celsius + 32;
    return fahrenheit;
}

int main() {
    float celsius;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    float fahrenheit = celsiusToFahrenheit(celsius);
    cout << "La temperatura en grados Fahrenheit es: " << fahrenheit;
    return 0;
}

