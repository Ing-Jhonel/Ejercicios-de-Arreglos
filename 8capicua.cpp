#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
    long long numero;
    cout << "Introduce un numero de 10 cifras: ";
    cin >> numero;

    while (numero < 1000000000 || numero > 9999999999){
        cout << "El numero debe tener exactamente 10 cifras." << endl;
        cin >> numero;
    }

    vector<int> vec;
    while (numero > 0){ 
        vec.push_back(numero % 10);
        numero /= 10;
    }

    vector<int> vecReverso = vec;
    reverse(vecReverso.begin(), vecReverso.end());

    if (vec == vecReverso) {
        cout << "Si es capicua." << endl;
    } else {
        cout << "No es capicua." << endl;
    }

    return 0;
}

