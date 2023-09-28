/*
Ejercicio
Ordenamiento de una lista: Pide al usuario que ingrese 
una lista de números y los ordena de menor a mayor
*/
#include<iostream>
using namespace std;

void ordenarLista(int lista[], int longitud) {
    for(int i=0; i<longitud-1; i++) {
        for(int j=0; j<longitud-i-1; j++) {
            if(lista[j] > lista[j+1]) {
                int temporal = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temporal;
            }
        }
    }
}

int main() {
    int longitud;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> longitud;
    int lista[longitud];
    cout << "Ingrese los elementos: ";
    for(int i=0; i<longitud; i++) {
        cin >> lista[i];
    }
    ordenarLista(lista, longitud);
    cout << "La lista ordenada es: ";
    for(int i=0; i<longitud; i++) {
        cout << lista[i] << " ";
    }
    return 0;
}


