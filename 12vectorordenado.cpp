#include <iostream>
#include <vector>

using namespace std;

bool estaOrdenado(const vector<int>& vec, int longitud) {
	
	//0. CREAR FUNCION
	
    for (int i=0; i<longitud-1; i++) { //se pone -1 porque abajo pondremos la condicion de si el elemento
    // siguiente es menor que el anterior, botaria falso, por eso esto, para evitar que si llega al 4<5
    // abajo ponga vec[4]>vec[5], ya que vec[5] no existe
    
        if (vec[i] > vec[i+1]){ // por si el numero ingresado es mayor al numero siguiente, quiere decir que no esta ordenado
            return false;
        }
    }
    //caso contrario, si lo estaria,
    return true;
}

int main() {
	
	
    // 1. PEDIR LONGITUD Y ELEMENTOS DEL VECTOR
    vector<int> miVector;
    int longitud;
    int numero;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> longitud;

    cout << "Ingrese los elementos del vector: " << endl << endl;
    for (int i=0; i<longitud; i++) {
    	cout << "Elemento " << i+1 << ": ";
        cin >> numero;
        miVector.push_back(numero); //Esta función se utiliza para agregar un nuevo elemento al final del vector.
        //Supongamos que el usuario ingresa los números 5, 10 y 15 en sucesión. Al final seria "miVector" contiene: [5, 10, 15]
        //La llamada a miVector.push_back(numero); toma el valor de numero y lo agrega al final del vector miVector, aumentando el tamaño del vector en uno.
    }
    
    //2. MOSTRAR SI EL VECTOR ESTA ORDENADO O NO
    if (estaOrdenado(miVector, longitud)) {
        cout << "El vector está ordenado." << endl;
    } else {
        cout << "El vector no está ordenado." << endl;
    }

    return 0;
}



