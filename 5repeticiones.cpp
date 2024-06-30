#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "CONTADOR DEL MENOR Y MAYOR" << endl;
    cout << "**************************" << endl << endl;
    //1. LEER NUMEROS
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    while (n <= 0) {
        cout << "Invalido. Intente de nuevo: ";
        cin >> n;
    }
	
	cout << endl;
    int numeros[n];
    cout << "Ingrese los numeros:" << endl << endl;
    for (int i = 0; i < n; ++i) {
    	cout << "- ";
        cin >> numeros[i];
    }

	// 2. DECLARAR VARIABLES
    // Inicialización de variables para el mayor y el menor
    int mayor = numeros[0];
    int menor = numeros[0];// a ambos le ponemos numeros[0] siendo el primer elemento del arreglo, porque primeramente
    // este sera el primer mayor y el primer menor, por eso se inicializa con este.
    int contadorMayor = 1;
    int contadorMenor = 1;

    //3. BUSCAR MAYOR Y MENOR
    for (int i=1; i<n; i++){ // se cuenta desde el 1, porque el mayor ya esta en el arreglo 0
    	if(numeros[i] > mayor){ 
    		mayor = numeros[i]; // cambian por cada iteracion que se cumpla
    		contadorMayor=1; // esto es para reiniciar el contador cada vez que se halla un nuevo mayor
		} else if (numeros[i] == mayor){
			contadorMayor++; // si se cumple, se agrega +1
		}
		
		if(numeros[i] < menor){
			menor = numeros[i]; // cambian por cada iteracion que se cumpla
			contadorMenor=1;// esto es para reiniciar el contador cada vez que se halla un nuevo menor
		} else if (numeros[i] == menor){
			contadorMenor++;  // si se cumple, se agrega +1
		}
	}
	
	cout << endl;
    //4. MOSTRAR RESULTADOS
    cout << "El mayor numero ingresado es: " << mayor << endl;
    cout << "Se repite " << contadorMayor << " veces." << endl << endl;
    cout << "El menor numero ingresado es: " << menor << endl;
    cout << "Se repite " << contadorMenor << " veces." << endl;

    return 0;
}
