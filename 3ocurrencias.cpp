#include <iostream>
#include <string>

using namespace std;

int main() {
	
	//1. DECLARAMOS VARIABLES
    string lineadetexto; //string porque seran muchos caracteres
    char letra; // char porque sera solo 1 caracter (una letra)
    int contadorletra = 0; //int porque sera un numero entero 
    
    //2. LEER LAS PALABRAS DE UNA LINEA Y ALMACENARLAS
    // Con este codigo leemos una linea completa de la entrada estandar (cin) y se almacena en una variable (lineadetexto)
    //  A diferencia de cin >> variable, que solo lee hasta el primer espacio, getline lee hasta que se encuentra un carácter de nueva línea (Enter)
    cout << "HALLE LA CANTIDAD DE X LETRA EN EL TEXTO" << endl;
    cout << "****************************************" << endl << endl;
    cout << "Ingresa una cadena de texto: ";
    getline(cin, lineadetexto);
	
	//3. LEEMOS LETRA A CONTAR
    cout << "Ingresa la letra que deseas contar: ";
    cin >> letra;

    //4. BUCLE PARA QUE PASE PORQUE CADA CARACTER Y VERIFICAR LA LETRA
   	// size_t = int, solo somos mas explicitos que estamos trabajando tamaños de objetos y no numeros
   	// lineadetexto.length() para que cuenta cuantos caracteres tiene el texto (sera el limite)
    for (size_t i = 0; i < lineadetexto.length(); i++) {
    	// por cada palabra que pase, si es igual a la letra, se sumada +1 al contador.
        if (lineadetexto[i] == letra) {
            contadorletra++;
        }
    }
	
	cout << endl;
	///5. IMPRIMIR
    cout << "La letra '" << letra << "' aparece " << contadorletra << " veces en la cadena." << endl;

    return 0;
}
