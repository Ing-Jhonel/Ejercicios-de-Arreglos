#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    while (n <= 0) {
        cout << "Invalido. Intente de nuevo: ";
        cin >> n;
    }

    int numeros[n];
    cout << "Ingrese los numeros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];
    int contadorMayor = 1;
    int contadorMenor = 1;

    for (int i=1; i<n; i++){
    	if(numeros[i] > mayor){ 
    		mayor = numeros[i];
    		contadorMayor=1;
		} else if (numeros[i] == mayor){
			contadorMayor++;
		}
		
		if(numeros[i] < menor){
			menor = numeros[i];
			contadorMenor=1;
		} else if (numeros[i] == menor){
			contadorMenor++;
		}
	}

    cout << "El mayor numero ingresado es: " << mayor << endl;
    cout << "Se repite " << contadorMayor << " veces." << endl;
    cout << "El menor numero ingresado es: " << menor << endl;
    cout << "Se repite " << contadorMenor << " veces." << endl;

    return 0;
}
