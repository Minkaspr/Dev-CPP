#include <iostream>

using namespace std;

int main (){
	/*
	Operadores de Comparación
	> Igual			-> '=='
	> Mayor 		-> '>'
	> Menor 		-> '<'
	> Mayor igual	-> '>='
	> Menor igual	-> '<='
	> Distinto		-> '!='
	*/
	
	/*
	Operadores Lógicos
	> NOT	-> '!'
	> AND	-> '&&'
	> OR	-> '||'
	*/
	int a,b,c,d;
	bool respuesta;
	
	a = 5;
	b = 10;
	c = 15;
	d = 20;

	respuesta = (b > a); // 1
	respuesta = (b > a && d > c); // 1
	respuesta = (b > a && d == c); // 0
	respuesta = (b < a || d > c); // 1
	respuesta = !(a < d); // 0
	cout<<respuesta<<endl;
	
	// 1 <> True 
	// 0 <> False
	return 0;
}
