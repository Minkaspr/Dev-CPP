/*
Escriba un programa que calcule las soluciones de una ecuación
de segundo grado de la forma 'ax^2 + bx + c = 0'
teniendo en cuenta que:

x= ((-b) +- sqrt((pow(b,2)-4ac)))/(2a)
*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c; //a = 1, b = -3 y c = 2
	float res1,res2;
	cout<<"Ingrese el valor de a: " && cin>>a;
	cout<<"Ingrese el valor de b: " && cin>>b;
	cout<<"Ingrese el valor de c: " && cin>>c;
	
	res1 = ((-b) + sqrt((pow(b,2) - 4*a*c)))/(2*a);   
	res2 = ((-b) - sqrt((pow(b,2) - 4*a*c)))/(2*a);   
	
	cout<<"Ecuacion de 2do grado"<<endl;
	cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
	cout<<"Resultados: "<<endl;
	cout<<"X1 = "<<res1<<"\t X2 = "<<res2<<endl;
	return 0;
}
