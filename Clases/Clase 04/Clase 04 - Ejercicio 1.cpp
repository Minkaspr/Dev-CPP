/*
Ejercicio #1:
Construir una función que verifique si un número es capicúa.
Un número capicúa es aquel que leído de izquierda a derecha 
es igual a leerlo de derecha a izquierda. 
Por ejemplo, el número 1221 es capicúa.
*/
#include <iostream>
using namespace std;

int invertir(int n, int n_inver) {
    if (n == 0){
    	return n_inver;
	}
    n_inver = (n_inver * 10) + (n % 10);
    return invertir(n / 10, n_inver);
}

bool es_capicua(int n) {
    int n_inver = invertir(n, 0);
    if (n_inver == n){
		return true;
	} else {
        return false;
	}
}

int main(){
	int n;
	cout<<"\nIngrese el numero a verificar: "&&cin>>n;
	if(es_capicua(n)){
		cout<<n<<" es un numero capicua."<<endl;
  	} else {
    cout<<n<<" no es un numero capicua."<<endl;
  	}
	return 0;
}

/*
	Sin Recursividad
	bool es_capicua(int n) {
	  int aux = n;
	  int rev = 0;
	  while (aux > 0) {
	    rev = (rev * 10) + (aux % 10);
	    aux /= 10;
	  }
	  return (rev == n);
	}
	---------------------------
	bool es_capicua(int n) {
	  int rev = 0;
	  for (int aux = n; aux > 0; aux /= 10) {
	    rev = (rev * 10) + (aux % 10);
	  }
	  return (rev == n);
	}
	---------------------------
	bool es_capicua(int n) {
	    int aux = n;
	    int rev = 0;
	    do {
	        rev = (rev * 10) + (aux % 10);
	        aux /= 10;
	    } while (aux > 0);
	    return (rev == n);
	}

*/
