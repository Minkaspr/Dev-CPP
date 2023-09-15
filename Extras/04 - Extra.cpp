/*
Convertir un numero en base 8 de un numero N de base 10: 
Para convertir un n�mero en base 8 de un n�mero N de 
base 10, podemos dividir el n�mero por 8 repetidamente 
y utilizar los restos para construir el n�mero en base 8.
*/
#include<iostream>
using namespace std;

int octal(int n) {
    int resultado = 0, potencia = 1; 
    while(n > 0) { 
        resultado += (n % 8) * potencia; 
        potencia *= 10; 
        n /= 8; 
    } 
    return resultado; 
}

int main() {
    int n; 
	cout<<"Ingrese un numero entero positivo: "; 
	cin>>n; 
	cout<<"El numero "<<n<<" en base octal es: "<<octal(n)<<endl; 
	return 0; 
}

