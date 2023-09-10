/*
Ejercicio #2:
Construir una función recursiva que resuelva la potencia 
aplicando recursividad.
*/
#include <iostream>
using namespace std;

int potencia(int base, int expo) {
  if (expo == 0) {
    return 1;
  } else if (expo == 1) {
    return base;
  } else {
    return base * potencia(base, expo - 1);
  }
}

int main (){
	int base, expo;
	cout<<"\nIngrese la base: "&&cin>>base;
	cout<<"Ingrese el exponente: "&&cin>>expo;
	cout<<base<<"^"<<expo<<" = "<<potencia(base, expo)<<endl;
	return 0;
}

/*
	Sin Recursividad
	int potencia(int base, int expo) {
	  int resultado = 1;
	  for (int i = 0; i < expo; i++) {
	    resultado *= base;
	  }
	  return resultado;
	}
	----------------------------------
	int potencia(int base, int expo) {
	    int resultado = 1;
	    int i = 0;
	    while (i < expo) {
	        resultado *= base;
	        i++;
	    }
	    return resultado;
	}
	----------------------------------
	int potencia(int base, int expo) {
		if (expo == 0) {
		    return 1;
		}
		int resultado = 1;
		int i = 0;
		do {
		    resultado *= base;
		    i++;
		} while (i < expo);
		return resultado;
	}
	
*/
