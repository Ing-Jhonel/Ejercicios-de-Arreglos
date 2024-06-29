#include <iostream>
#include <string>

using namespace std;

int main() {
	
    string lineadetexto;
    char letra;
    int contadorletra = 0;
    
    cout << "Ingresa una cadena de texto: ";
    getline(cin, lineadetexto);
	
    cout << "Ingresa la letra que deseas contar: ";
    cin >> letra;

    for (size_t i = 0; i < lineadetexto.length(); i++) {
        if (lineadetexto[i] == letra) {
            contadorletra++;
        }
    }

    cout << "La letra '" << letra << "' aparece " << contadorletra << " veces en la cadena." << endl;

    return 0;
}

