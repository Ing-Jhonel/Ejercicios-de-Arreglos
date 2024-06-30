#include <iostream>
#include <vector>

using namespace std;

int main() {
    
	// 1. DEFINIR VECTOR Y AGREGAR ELEMENTOS AL VECTOR CON PUSH BACK
	
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(10);
    
	// 2. DEFINIR VARIABLES
    int sum_pares = 0;
    int sum_impares = 0;
    
    // 3. HALLAR Y SUMAR LOS ELEMENTOS PARES E IMPARES
    // Calcular la suma de componentes en índices pares e impares
    // size_t = int, solo somos mas detallados de los elemtnos que manejaremos
    for (size_t i = 0; i < vec.size(); i++) { // vec.size = 10
        if (i % 2 == 0) {
            sum_pares += vec[i];
        } else {
            sum_impares += vec[i];
        }
    }
    
    // 4. MOSTRAR RESULTADOS
    cout << "Suma de componentes en indices pares: " << sum_pares << endl;
    cout << "Suma de componentes en indices impares: " << sum_impares << endl;

    return 0;
}

