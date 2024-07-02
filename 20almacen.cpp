#include <iostream>
#include <string>

using namespace std;

// Declaración de la función para obtener el nombre del mes
string mes_nombre(int mes);

int main() {
    // Definición de constantes
    const int meses = 12;
    
    // Arreglo para almacenar las ventas mensuales
    double ventas[meses];
    
    // Solicitar al usuario las ventas mensuales
    cout << "Ingrese las ventas mensuales del anio 2020 para La Milagrosa:\n" << endl;
    for (int i = 0; i < meses; ++i) {
        string nombre_mes;
        cout << "Venta de " << mes_nombre(i + 1) << ": ";
        cin >> ventas[i];
    }
    
    // Calcular el promedio anual de ventas
    double total_anual = 0;
    for (int i = 0; i < meses; ++i) {
        total_anual += ventas[i];
    }
    double promedio_anual = total_anual / meses;
    
    // Calcular el porcentaje del promedio anual para cada mes
    double porcentajes[meses];
    for (int i = 0; i < meses; ++i) {
        porcentajes[i] = (ventas[i] / promedio_anual) * 100;
    }
    
    // Calcular el valor de la venta mensual promedio
    double venta_promedio = promedio_anual;
    
    // Determinar los niveles de ventas para cada mes
    string niveles[meses];
    int excelente_count = 0;
    int minimo_count = 0;
    int regular_count = 0;
    
    for (int i = 0; i < meses; ++i) {
        if (porcentajes[i] < 40) {
            niveles[i] = "Minimo";
            minimo_count++;
        } else if (porcentajes[i] >= 40 && porcentajes[i] <= 75) {
            niveles[i] = "Regular";
            regular_count++;
        } else {
            niveles[i] = "Excelente";
            excelente_count++;
        }
    }
    
    // Calcular porcentajes
    double porcentaje_minimo = (static_cast<double>(minimo_count) / meses) * 100;
    double porcentaje_regular = (static_cast<double>(regular_count) / meses) * 100;
    double porcentaje_excelente = (static_cast<double>(excelente_count) / meses) * 100;
    
    // Mostrar resultados
    cout << "\nResultados:\n" << endl;
    cout << "Valor de la venta mensual promedio: $" << venta_promedio << endl;
    cout << "Porcentaje de los meses del anio que cumplieron los niveles de ventas:\n" << endl;
    cout << "  - Minimo (< 40% del promedio anual): " << porcentaje_minimo << "%\n";
    cout << "  - Regular (Entre 40% y 75% del promedio anual): " << porcentaje_regular << "%\n";
    cout << "  - Excelente (> 75% del promedio anual): " << porcentaje_excelente << "%\n";
    
    // Mostrar meses donde la venta fue Excelente
    cout << "\nMeses con ventas Excelentes:\n";
    for (int i = 0; i < meses; ++i) {
        if (niveles[i] == "Excelente") {
            cout << "  - " << mes_nombre(i + 1) << endl;
        }
    }
    
    return 0;
}

// Definición de la función para obtener el nombre del mes según su número (1-12)
string mes_nombre(int mes) {
    switch(mes) {
        case 1: return "enero";
        case 2: return "febrero";
        case 3: return "marzo";
        case 4: return "abril";
        case 5: return "mayo";
        case 6: return "junio";
        case 7: return "julio";
        case 8: return "agosto";
        case 9: return "septiembre";
        case 10: return "octubre";
        case 11: return "noviembre";
        case 12: return "diciembre";
        default: return "mes invalido";
    }
}




