#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Semilla para generar números aleatorios
    srand(static_cast<unsigned int>(time(NULL)));

    // Generar 30 números aleatorios entre 100 y 1000
    vector<int> numeros;
    for (int i = 0; i < 30; ++i) {
        int num = rand() % 901 + 100; // Genera números entre 100 y 1000
        numeros.push_back(num);
    }

    // Mostrar los números generados
    cout << "Números generados:" << endl;
    for (size_t i = 0; i < numeros.size(); ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Calcular la media
    int sum = 0;
    for (size_t i = 0; i < numeros.size(); ++i) {
        sum += numeros[i];
    }
    double media = static_cast<double>(sum) / numeros.size();

    // Calcular la mediana
    sort(numeros.begin(), numeros.end());// ordenar de manera ascedente
    double mediana;
    if (numeros.size() % 2 == 0) {
        mediana = (numeros[numeros.size() / 2 - 1] + numeros[numeros.size() / 2]) / 2.0; // cuando es par, regla de (x+x)/2
    } else {
        mediana = numeros[numeros.size() / 2];
    }

    // Calcular la moda
    vector<int> frecuencia(901, 0); // 1000 - 100 + 1 = 901
    for (size_t i = 0; i < numeros.size(); ++i) {
        frecuencia[numeros[i] - 100]++;
    }
    int moda = 100, maxFrecuencia = frecuencia[0];
    for (size_t i = 1; i < frecuencia.size(); ++i) {
        if (frecuencia[i] > maxFrecuencia) {
            maxFrecuencia = frecuencia[i];
            moda = i + 100;
        }
    }

    // Mostrar resultados
    cout << "Media: " << media << endl;
    cout << "Mediana: " << mediana << endl;
    cout << "Moda: " << moda << endl;

    return 0;
}


