/*
Escriba un programa que lea tres numeros y determine
cual de ellos es el mayor
*/
#include <iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"Ingrese 3 numeros\n";
	cin>>n1>>n2>>n3;
	if(n1>n2 && n1>n3){
		cout<<"El mayor es "<<n1;
	} else if(n2>n1 && n2>n3){
		cout<<"El mayor es "<<n2;
	} else {
		cout<<"El mayor es "<<n3;
	}
	return 0;
}
