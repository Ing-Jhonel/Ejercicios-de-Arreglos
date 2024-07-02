#include <iostream>
#include <string>
#include <cctype> // Para usar funciones como tolower()

using namespace std;

// Funci�n para limpiar la frase (quitar espacios, acentos, puntuaciones y convertir a min�sculas)
string limpiarFrase(const string& frase) {
    string limpia;
    for (size_t i = 0; i < frase.length(); ++i) {
        char c = frase[i];
        if (isalpha(c)) { // Si es una letra
            limpia += tolower(c); // Convertir a min�scula y a�adir a la frase limpia
        }
    }
    return limpia;
}

// Funci�n para verificar si es pal�ndromo
bool esPalindromo(const string& frase) {
    string limpia = limpiarFrase(frase);
    int izquierda = 0;
    int derecha = limpia.length() - 1;
    
    while (izquierda < derecha) {
        if (limpia[izquierda] != limpia[derecha]) {
            return false;
        }
        izquierda++;
        derecha--;
    }
    return true;
}

int main() {
    string frase;
    cout << "Ingrese una frase para verificar si es un palindromo: ";
    getline(cin, frase);
    
    if (esPalindromo(frase)) {
        cout << "La frase es un palindromo." << endl;
    } else {
        cout << "La frase no es un palindromo." << endl;
    }
    
    return 0;
}


