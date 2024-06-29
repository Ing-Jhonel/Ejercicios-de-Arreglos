#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	

    const int max_nombres=100;
    string nombres[max_nombres]; 
    int num_nombres; 

    cout << "Ingrese el numero de nombres a ingresar: ";
    cin >> num_nombres;

    while (num_nombres<=0 || num_nombres>max_nombres) { 
        cout << "Invalido. Intente de nuevo: ";
        cin >> num_nombres;
    }

    cout << "Ingrese los nombres uno por uno:" << endl;
    for (int i=0; i<num_nombres; i++) {
        cout << "Nombre " << i+1 << ": ";
        cin >> nombres[i];
    }

    sort(nombres, nombres + num_nombres);

    cout << "\nNombres ordenados alfabeticamente:" << endl;
    for (int i=0; i<num_nombres; i++) {
        cout << nombres[i] << endl;
    }
    return 0;
}

