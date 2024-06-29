#include <iostream>
#include <sstream>


using namespace std;

int main() {
    string lineadetexto;
    
    // Con este codigo leemos una linea completa de la entrada estandar (cin) y se almacena en una variable (lineadetexto)
    //  A diferencia de cin >> variable, que solo lee hasta el primer espacio, getline lee hasta que se encuentra un carácter de nueva línea (Enter).
    getline(cin, lineadetexto);
    
    // Crear un stringstream a partir de la entrada
    stringstream ss(lineadetexto);
    string word;
    
    // Leer y procesar cada palabra del stringstream
    while (ss >> word) {
        cout << word << endl;
    }
    
    return 0;
}

