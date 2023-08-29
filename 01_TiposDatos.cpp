#include <iostream>

// Constante a nivel PreProcesador
#define PI 3.1416

using namespace std;

int main (){
	
	/* 
	Tipos de Datos
	> Enteros	-> 'int'
	> Float		-> 'float'
	> Double	-> 'double'
	> Char		-> 'char'
	> Boolean	-> 'bool'
	*/
	
	int abc = 123;
	float def = 0.123456;
	double ghi = 3.1415;
	char aeiou = 'A';
	bool f = false; // 1 <> True, 0 <> false 
	
	/* Variables y Constantes */
	float altura = 1.70;
	const float GRAVEDAD = 9.8;
	
	/* Salida y entrada de datos */
	// 'cout<<' - 'cin>>'  
	
	/* Saltos de Linea */
	// "\n" - '<<endl'
	
	cout<<GRAVEDAD<<"\n";
	cout<<PI<<endl;
	return 0;
}
