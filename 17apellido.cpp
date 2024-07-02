#include <iostream>
#include <string>
using namespace std;

// Función para verificar si el apellido pertenece a la persona
bool verificaApellido(const string& nombreCompleto, const string& apellido) {
    // Encontrar la posición del apellido en el nombre completo
    size_t pos = nombreCompleto.find(apellido);

    // Verificar si el apellido está presente y es un apellido independiente
    if (pos != string::npos) {
        // Comprobar que el apellido esté al final del nombre completo o seguido de un espacio
        if (pos + apellido.length() == nombreCompleto.length() || nombreCompleto[pos + apellido.length()] == ' ') {
            return true;
        }
    }

    return false;
}

int main() {
    string nombreCompleto;
    string apellido;

    // Solicitar al usuario que introduzca el nombre completo y el apellido
    cout << "Introduce el nombre completo: ";
    getline(cin, nombreCompleto);

    cout << "Introduce el apellido a verificar: ";
    getline(cin, apellido);
	
	cout << endl;
	
    // Verificar si el apellido pertenece a la persona
    if (verificaApellido(nombreCompleto, apellido)) {
        cout << "El apellido pertenece a la persona." << endl;
    } else {
        cout << "El apellido no pertenece a la persona." << endl;
    }

    return 0;
}




