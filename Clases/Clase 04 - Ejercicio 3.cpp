/*
Ejercicio #3:
Escribe una función recursiva que tome un número entero 
positivo como entrada y devuelva la suma de sus dígitos. 
Por ejemplo, si la entrada es 12345, la función debe devolver 15
*/
#include <iostream>
using namespace std;

int suma_digitos(int n) {
  if (n < 10) {
    return n;
  } else {
    return n % 10 + suma_digitos(n / 10);
  }
}
	
int main() {
  int n;
  cout<<"\nIngrese un numero: "&&cin>>n;
  cout<<"La suma de los digitos de "<<n<<" es "<<suma_digitos(n)<<endl;
  return 0;
}

/*
	Sin Recursividad
	int suma_digitos(int n) {
  		int suma = 0;
  		while (n > 0) {
    		suma += n % 10;
    		n /= 10;
  		}
  		return suma;
	}
	---------------------------
	int suma_digitos(int n) {
		int suma = 0;
		for (int i = n; i > 0; i /= 10) {
			suma += i % 10;
		}
  		return suma;
	}
	--------------------------
	int suma_digitos(int n) {
		int suma = 0;
		do {
			suma += n % 10;
			n /= 10;
		} while (n > 0);
		return suma;
	}

*/
