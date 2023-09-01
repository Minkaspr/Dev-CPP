/*
Realice un programa que calcule el valor que toma la siguiente
función para unos valores dados de 'x' e 'y':

f(x,y) = (sqrt(y))/((y*y)-1)
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x,y,res = 0;
	cout<<"Hola\n";
	cout<<"Ingrese el valor para X: " && cin >> x;
	cout<<"Ingrese el valor para Y: " && cin >> y;
	
	res = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"El resultado es: "<<res<<endl;
	return 0;
}

