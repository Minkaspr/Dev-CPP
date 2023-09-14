/*
Un empleado recibe un pago por las horas que trabaja en una semana. 
Las primeras 48 horas se pagan a una tarifa normal, mientras que 
cualquier hora adicional se considera tiempo extra y se paga a 
una tarifa de 1.5 veces la tarifa normal.
Además, si el sueldo bruto del empleado (antes de los descuentos) 
es mayor a 500, se le aplica un descuento del 11%. Si el sueldo 
bruto es de 500 o menos, el descuento aplicado es del 5%.

Escribe un programa que:

Pida al usuario las horas trabajadas.
Pida al usuario el pago por hora.
Calcule y muestre las horas extras (si las hay).
Calcule y muestre el sueldo bruto (antes de los descuentos).
Calcule y muestre el monto del descuento.
Calcule y muestre el sueldo neto (después de los descuentos).
*/
#include <iostream>
using namespace std;

// Función para calcular el sueldo bruto
float calcularSueldoBruto(int horasTrabajadas, float pagoPorHora) {
    int horasNormales = min(horasTrabajadas, 48);
    int horasExtra = max(0, horasTrabajadas - 48);

    return horasNormales * pagoPorHora + horasExtra * pagoPorHora * 1.5;
}

// Función para calcular el descuento
float calcularDescuento(float sueldoBruto) {
    if(sueldoBruto > 500) {
        return sueldoBruto * 0.11;
    } else {
        return sueldoBruto * 0.05;
    }
}

int main() {  
    int horasTrabajadas;
    float pagoPorHora, sueldoBruto, descuento, sueldoNeto;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Ingrese el pago por hora: ";
    cin >> pagoPorHora;

    sueldoBruto = calcularSueldoBruto(horasTrabajadas, pagoPorHora);
    descuento = calcularDescuento(sueldoBruto);
    sueldoNeto = sueldoBruto - descuento;

    cout << "\nRESUMEN" << endl;
    cout << "Horas trabajadas: " << horasTrabajadas << endl;
    cout << "Sueldo sin descuento: S/" << sueldoBruto << endl;
    cout << "Descuento: S/" << descuento << endl;
    cout << "Sueldo final: S/" << sueldoNeto << endl;  

    return 0;
}

