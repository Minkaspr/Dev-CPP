/*
La calificaci�n final de un estudiante es la media ponderada
de tres notas: La nota de pr�cticas que cuenta un 30% del
total, la nota te�rica que cuenta un 60% y la nota de 
participaci�n que cuenta el 10% restante. Escriba un programa
que lea de la entrada est�ndar las tres notas de un alumno
y escriba en la salida est�ndar su nota final.
*/
#include <iostream>
using namespace std;
int main (){
	float notaFinal, notaPracticas, notaTeorica, notaParticipacion;
	cout<<"Hola\n";
	cout<<"Ingresa las notas solicitadas"<<endl;
	cout<<"Nota de la practica: ";
	cin>>notaPracticas;
	cout<<"Nota de la teoria: ";
	cin>>notaTeorica;
	cout<<"Nota de participacion: ";
	cin>>notaParticipacion;
	notaPracticas *= 0.3;
	notaTeorica *= 0.6;
	notaParticipacion *= 0.1;
	
	notaFinal = notaPracticas + notaTeorica + notaParticipacion;
	cout<<"La nota final es "<<notaFinal<<endl;
	return 0;
}
