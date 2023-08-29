#include <iostream>

using namespace std;

int main (){
	/* 
	Operadores Aritméticos
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
	Operadores de Asignación
	> Igualdad			-> '='
	> Adición			-> '+='
	> Sustracción		-> '-='
	> División			-> '/='
	> Multiplicación	-> '*='
	> Módulo			-> '%='
	*/
	
	a*=b; // <> a = a * b;
	cout<<a; // 28
	
	
	return 0;
}
