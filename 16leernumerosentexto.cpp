#include <iostream>
#include <string>
#include <cstdlib> // Para atoi
using namespace std;

int main() {
    string input;
    cout << "Ingresa una linea de texto: ";
    getline(cin, input); // Leer la línea completa de entrada
    
    string digits_only = "";
    for (size_t i = 0; i < input.size(); ++i) {
        char c = input[i];
        if (isdigit(c)) {
            digits_only += c; // Agregar solo los dígitos a la cadena
        }
    }
    
    int n = 0;
    if (!digits_only.empty()) {
        n = atoi(digits_only.c_str()); // Convertir la cadena de dígitos a un entero
        n += 2; // Sumar 2 al valor obtenido
    }
    
    cout << "Valor original de digitos: " << digits_only << endl;
    cout << "Valor de n + 2: " << n << endl;
    
    return 0;
}




