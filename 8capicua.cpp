#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	cout << "AVERIGUEU SI UN NUMERO ES CAPICUA" << endl;
	cout << "*********************************" << endl << endl;
	//1. LEER EL NUMERO
    long long int numero;
    cout << "Introduce un numero de 10 cifras: ";
    cin >> numero;

    // Verificar si el n�mero tiene 10 d�gitos
    while (numero < 1000000000 || numero > 9999999999) {
        cout << "Introduce un numero de 10 cifras: ";
        cin >> numero;
    }

    //2. ALMACENAR LOS DIGITOS DE UN NUMERO EN UN VECTOR
    vector<int> vec; //declarar un vector de tipo int llamado "vec", pero no le agregaremos contenido, eso sera despues
    while (numero > 0){ 
        vec.push_back(numero % 10); // Obtiene el �ltimo d�gito del n�mero (numero % 10) y lo a�ade al final del vector vec. 
		// Esto se hace usando la operaci�n push_back, que a�ade un elemento al final del vector.
        numero /= 10; // para eliminar el ultimo digito
        // ej 1234 --> vec = [4, 3, 2, 1]
    }

    //3. INVERTIR EL VECTOR
    vector<int> vecReverso = vec;
    reverse(vecReverso.begin(), vecReverso.end());
    // vec = [4, 3, 2, 1] ---> vecReverso = [1, 2, 3, 4]
	
	cout << endl;
	cout << "**************" << endl;
    //4. COMPARAR AMBOS VECTORES
    if (vec == vecReverso) { //si son iguales quiere decir que es capicua
        cout << "Si es capicua." << endl;
    } else {
        cout << "No es capicua." << endl;
    }
	cout << "**************" << endl;
    return 0;
}

