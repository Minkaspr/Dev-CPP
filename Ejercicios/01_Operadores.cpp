/*
Realizar un programa que calcule el indice
de masca corporal o IMC
*/
#include <iostream>
// Libreria de funciones matematicas
#include <math.h>
using namespace std;
int main(){
	
	float peso, altura, resultado;
	cout<<"Calculadora de Indice de Masa Corporal (IMC)"<<endl;
	cout<<"Ingrese su peso en kg: ";
	cin>>peso;
	cout<<"Ingrese su altura en metros: ";
	cin>>altura;
	//Formula del IMC
	resultado = peso / pow(altura,2); // pow(altura,2) <> (altura * altura)
	cout<<"Su IMC es: "<<resultado<<"\n";
	return 0;
}
