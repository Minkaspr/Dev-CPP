/*
Escribe un programa que haga lo siguiente:
Que el programa pida cuantos alumnos va a registrar,
Los datos del alumno son nombres y sus notas
Para cada alumno se le debe ingresar 3 notas, la PC1,PC2 Y PC3.
Se le debe mostrar si aprueba o no mediante el promedio y este debe ser mayor o igual a 12
y aparte al final de que el usuario ingrese a sus alumnos y notas,
por consola se deben mostrar el detalle de cada alumno, nombre, notas y si aprueba o no.

Mostrar un menu al inicio con opciones al iniciar el programa:
1 - Iniciar el programa
2 - Salir del programa
Si el usuario presiona el 1, recien empezara a solicitar la cantidad de alumnos si es 2 se termina el programa

Solo se puede usar:
#include <iostream>
using namespace std;
sin estruct, de poo;
*/
#include <iostream>
using namespace std;

int main() {  
    int opcion;
    do {
	    cout << "1 - Iniciar el programa\n";
	    cout << "2 - Salir del programa\n";
	    cout << "Ingrese una opcion(numerica): ";
	    cin >> opcion;
	
	    if(opcion == 1) {
	        int numAlumnos;
	        cout << "¿Cuantos alumnos va a registrar? ";
	        cin >> numAlumnos;
	
	        string nombres[numAlumnos];
	        int notas[numAlumnos][3];
	        float promedios[numAlumnos];
	
	        for(int i = 0; i < numAlumnos; i++) {
	            cout << "Ingrese el nombre del alumno " << (i + 1) << ": ";
	            cin >> nombres[i];
	
	            int sumaNotas = 0;
	            for(int j = 0; j < 3; j++) {
	                cout << "Ingrese la nota " << (j + 1) << " del alumno: ";
	                cin >> notas[i][j];
	                sumaNotas += notas[i][j];
	            }
	            promedios[i] = sumaNotas / 3.0;
	        }
	
	        for(int i = 0; i < numAlumnos; i++) {
	            cout << "\nNombre del alumno: " << nombres[i] << endl;
	            cout << "Notas: ";
	            for(int j = 0; j < 3; j++) {
	                cout << notas[i][j] << " ";
	            }
	            cout << "\nPromedio: " << promedios[i] << endl;
	            if(promedios[i] >= 12) {
	                cout << "El alumno aprueba." << endl;
	            } else {
	                cout << "El alumno no aprueba." << endl;
	            }
	        }
	    } else if(opcion == 2) {
	        cout << "Saliendo del programa...";
	    } else {
	        cout << "Opcion no valida.\n"<<endl;
	    }
	} while(opcion != 1 && opcion != 2);
    return 0;
}

