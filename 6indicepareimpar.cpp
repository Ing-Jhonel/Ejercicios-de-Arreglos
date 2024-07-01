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
    cout << "Introduce un n�mero: ";
    cin >> numero;

    // Convertimos el n�mero en un vector de d�gitos
    vector<int> digitos;
    int temp = numero;
    while (temp > 0) {
        digitos.push_back(temp % 10);
        temp /= 10;
    }

    // Comprobamos si es capic�a
    if (esCapicua(digitos)) {
        cout << "El n�mero " << numero << " es capic�a." << endl;
    } else {
        cout << "El n�mero " << numero << " no es capic�a." << endl;
    }

    return 0;
}


