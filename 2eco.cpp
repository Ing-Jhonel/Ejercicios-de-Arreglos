#include <iostream>
#include <sstream>


using namespace std;

int main() {
	
	//1. DECLARAMOS STRING PARA LA LINEA (entrada de muchos caracteres)
	// Esta variable se usar� para almacenar una l�nea completa de texto que el usuario ingrese.
    string lineadetexto;
    
    //2. LEER LAS PALABRAS DE UNA LINEA Y ALMACENARLAS
    // Con este codigo leemos una linea completa de la entrada estandar (cin) y se almacena en una variable (lineadetexto)
    //  A diferencia de cin >> variable, que solo lee hasta el primer espacio, getline lee hasta que se encuentra un car�cter de nueva l�nea (Enter)
    getline(cin, lineadetexto);
    
    //3. CONVERTIMOS LINEATEXTO COMO ENTRADA (para usar el << o >> en esta)
	//Se crea un objeto stringstream llamado ss y se inicializa con el contenido de input. stringstream permite tratar una cadena de texto como un flujo de 
	//entrada/salida, lo que significa que podemos usar las operaciones de extracci�n (>>) y otras funciones de flujo con �l, de la misma manera que lo har�amos 
	//con cin o cout.
    stringstream xd(lineadetexto);
    
    //4. DECLARAMAMOS STRING PARA CADA PALABRA (word va a ser cada palabra que se guardo en getline)
    // Se declara una variable de tipo string llamada word. Esta variable se usar� para almacenar cada palabra individual extra�da del stringstream.
    string word;
    
    //3. LEER CADA PALABRA E IMPRIMIRLA
    // Leer y procesar cada palabra del stringstream
    while (xd >> word) {
        cout << word << endl;
    }
    
    return 0;
}

