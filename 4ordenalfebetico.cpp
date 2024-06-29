#include <iostream>
#include <string>
#include <algorithm> // Para std::sort
using namespace std;

int main() {
	
	//1. DECLARAR VARIABLES
    const int max_nombres=100; // Define el tama�o m�ximo del arreglo nombres. M�ximo n�mero de nombres a leer
    string nombres[max_nombres]; // Arreglo para almacenar los nombres (nombre[100])
    int num_nombres; //Variable que almacenar� cu�ntos nombres se ingresar�n.
	
	cout << "ORDENA NOMBRES ALFABETICAMENTE" << endl;
	cout << "******************************" << endl << endl;
	//2. PEDIR CANTIDAD DE NOMBRES A INGRESAR
    // Pedir al usuario que ingrese el n�mero de nombres a ingresar
    cout << "*Ingrese el numero de nombres a ingresar: ";
    cin >> num_nombres;

	cout << endl;
	
	//3. VERIFICAR CANTIDAD DE NOMBRES VALIDA
    // Verificar que el n�mero de nombres sea v�lido
    while (num_nombres<=0 || num_nombres>max_nombres) { // no n <=0  o   n > 100
        cout << "Invalido. Intente de nuevo: ";
        cin >> num_nombres;
        if(num_nombres>0 && num_nombres<=max_nombres){ // para dar espacio si el bucle termina
        	cout << endl;
		}
    }
	
	//4. LEER NOMBRES 
    // Pedir al usuario que ingrese los nombres
    cout << "*Ingrese los nombres uno por uno:" << endl;
    cout << endl;
    for (int i=0; i<num_nombres; i++) {
        cout << "Nombre " << i+1 << ": ";
        cin >> nombres[i];
    }
	
	//5. ORDENAR LOS NOMBRES ALFABETICAMENTE
	//nombres= es el primer arreglo
	// nombres + num_nomnbres = limite 
	// a <= x <= b
	// sort lo que hace es ordenar el arreglo nombres, alfabeticamente
    sort(nombres, nombres + num_nombres);

    //6. MOSTRAR NOMBRES ORDENADOS
    // al estar ya ordenados, solo faltaria imprimirlos
    cout << "\nNombres ordenados alfabeticamente:" << endl;
    cout << endl;
    for (int i=0; i<num_nombres; i++) {
        cout << nombres[i] << endl;
    }
    return 0;
}

