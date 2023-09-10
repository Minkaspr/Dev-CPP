/*
Ejercicio #4:
Escribe una función recursiva que calcule la longitud de 
la secuencia de Collatz para un número dado. La secuencia 
de Collatz comienza con un número entero positivo y, en 
cada paso, si el número es par, se divide por 2; si es impar,
se multiplica por 3 y se suma 1. 
La secuencia termina cuando alcanza el número 1.
Por ejemplo, la longitud para 5 es 6.
*/
#include<iostream>
using namespace std;

int longitud_collatz(int n) {
  if (n == 1) {
    return 1;
  } else {
    int sig_n = 0;
    if (n % 2 == 0) {
      sig_n = n / 2;
    } else {
      sig_n = (3 * n) + 1;
    }
    return 1 + longitud_collatz(sig_n);
  }
}

int main(){
	int n;
	cout<<"\nIngrese un numero: "&&cin>>n;
	cout<<"La longitud de la secuencia de Collatz para "<<n<<" es "<<longitud_collatz(n)<<endl;
	return 0;
}

/*
	Sin Recursividad
	int longitud_collatz(int n){
		int acu = 1;
		while(n > 1){
			if(n % 2 == 0){
				acu+=1;
				n/=2;
			} else if(n % 2 == 1){
				n*=3;
				n+=1;
				acu+=1;
			}
		}
		return acu;
	}
	----------------------------
	int longitud_collatz(int n) {
		int longitud = 0;
		while (n != 1) {
			if (n % 2 == 0) {
			  	n /= 2;
			} else {
			  	n = (3 * n) + 1;
			}
			longitud++;
		}
		return longitud;
	}
	----------------------------
	int longitud_collatz(int n) {
		int longitud = 0;
		do {
			if (n % 2 == 0) {
				n /= 2;
			} else {
			  	n = (3 * n) + 1;
			}
			longitud++;
		} while (n != 1);
		return longitud;
	}
	----------------------------
	int longitud_collatz(int n) {
		int longitud = 0;
		for (int i = n; i != 1; longitud++) {
		    if (i % 2 == 0) {
		        i = i / 2;
		    } else {
		        i = (3 * i) + 1;
		    }
		}
		return longitud;
	}
*/
