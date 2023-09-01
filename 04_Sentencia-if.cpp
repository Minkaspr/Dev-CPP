#include <iostream>
using namespace std;
int main(){
	/*
	if <> Si condicion del 'if' es verdadera se ejecuta la instrucción
			Caso contrario no lo hará
	else <> Si no se ejecuta la condicion del 'if', se ejecuta la instruccion
			del 'else'
	else if <> Si no se ejecuta la condicion del 'if' y la condicion del 
			'if' es verdadera se ejecuta la instrucción caso contrario
			no lo hará
	
	Sentencia if
	if(condicion){
		instruccion;
	}
	
	Sentencia if - else
	if(condicion){
		instruccion 1;
	} else {
		instruccion 2;
	}
	
	Sentencia else - if
	if(condicion){
		instruccion 1;
	} else if(condicion){
		instruccion 2;
	} else {
		instruccion 3;
	}
	*/
	int numero, dato1 = 5, dato2 = 10;
	cout<<"Digite un numero: "&&cin>>numero;
	
	if(numero >= dato1){
		cout<<"El numero es mayor o igual a 5"<<endl;
	}
	// ---------------------------------------
	if(numero == dato1){
		cout<<"El numero es 5"<<endl;
	} else {
		cout<<"El numero es diferente a 5"<<endl;
	}
	// ---------------------------------------
	if(numero != dato1){
		cout<<"El numero es diferente a 5"<<endl;
	} else {
		cout<<"El numero es 5"<<endl;
	}
	// ---------------------------------------
	if(numero > dato1){
		cout<<"El numero es mayor a 5"<<endl;
	} else {
		cout<<"El numero es menor o igual a 5"<<endl;
	}
	// ---------------------------------------
	if(numero <= dato1){
		cout<<"El numero es menor o igual a 5"<<endl;
	} else {
		cout<<"El numero es mayor a 5"<<endl;
	}
	// ---------------------------------------
	if(numero < dato2 && numero > dato1){
		cout<<"El numero es menor que "<<dato2<<" y mayor que "<<dato1<<endl;
	} else if (numero >= dato2){
		cout<<"El numero es mayor o igual a "<<dato2<<endl;
	} else {
		cout<<"El numero es menor o igual a "<<dato1<<endl;
	}
	return 0;
}
