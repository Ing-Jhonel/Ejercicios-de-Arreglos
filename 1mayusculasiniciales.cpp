#include <iostream>
#include <cctype>

using namespace std;

// el & se usa cuando se va a modificar esa variable
void capitalizeWords(string &texto) {
    bool nuevapalabra = true; // Flag para indicar el inicio de una nueva palabra

// size_t = int, solo somos mas explicitos que estamos trabajando tamaños de objetos y no numeros
// con este for para a iterar sobre cada caracter del texto

    for (size_t i=0; i<texto.length(); i++) {
// cada i = adquiere un valor numero, en este caso, la posicion del caracter del texto
// por eso 
// se usa arreglos no hacer muchos, i 
        if (isspace(texto[i])) { 	// verifica si el caracter en el que esta, es un espacio en blanco, si eso es asi, establece "nuevapalabra" en true, 
									// indicando que el próximo carácter será el inicio de una nueva palabra.
		
            nuevapalabra = true; // El siguiente carácter será el comienzo de una nueva palabra (obvio, porque por cada espacio inicia otra palabra)
            
        } else if (nuevapalabra) { // el inicio de palabra (nuevapalabra) es verdadero asi que..
            texto[i] = toupper(texto[i]); // salta de palabra, por donde ira a la primera letra, asi con toupper() logramos hacerlo mayuscula
            nuevapalabra = false; // el siguiente caracter es una letra, por el "nuevapalabra" sera falso,
        } else {
            texto[i] = tolower(texto[i]);
        }
    }
}

int main() {
	
	cout << "**************************************" << endl << endl;
    string textoescrito = "caceres patrimonio de la humanidad";
    capitalizeWords(textoescrito);
    cout << textoescrito << endl; // La cadena original "text" se modifica y se imprime como "Caceres Patrimonio De La Humanidad"
    return 0;
}

