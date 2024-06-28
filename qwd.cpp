#include <iostream>
#include <cctype>

using namespace std;

void capitalizeWords(string &texto) {
    bool nuevapalabra = true; 
    for (size_t i=0; i<texto.size(); i++) {
    	texto[i] = toupper(texto[i]);
		cout << texto[i] << endl;
	}
}

int main() {
    string textoescrito = "caceres patrimonio de la humanidad";
    capitalizeWords(textoescrito);
    return 0;
}
