#include <iostream>

using namespace std;

int main (){
	/* 
	Operadores Aritm�ticos
	> Sumar			-> '+'
	> Restar		-> '-'
	> Multiplicar	-> '*'
	> Dividir		-> '/'
	> Resto			-> '%'
	*/
	int a = 7;
	int b = 4;
	cout<<a % b<<endl; // -> 3

	/*
	Operadores de Asignaci�n
	> Igualdad			-> '='
	> Adici�n			-> '+='
	> Sustracci�n		-> '-='
	> Divisi�n			-> '/='
	> Multiplicaci�n	-> '*='
	> M�dulo			-> '%='
	*/
	
	a*=b; // <> a = a * b;
	cout<<a; // 28
	
	
	return 0;
}
