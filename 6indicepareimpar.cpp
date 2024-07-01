#include <iostream>
#include <vector>
using namespace std;

bool esCapicua(const vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n / 2; ++i) {
        if (vec[i] != vec[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero;
    cout << "Introduce un número: ";
    cin >> numero;

    // Convertimos el número en un vector de dígitos
    vector<int> digitos;
    int temp = numero;
    while (temp > 0) {
        digitos.push_back(temp % 10);
        temp /= 10;
    }

    // Comprobamos si es capicúa
    if (esCapicua(digitos)) {
        cout << "El número " << numero << " es capicúa." << endl;
    } else {
        cout << "El número " << numero << " no es capicúa." << endl;
    }

    return 0;
}


