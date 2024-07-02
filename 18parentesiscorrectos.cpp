#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool verificarBalanceoParentesis(const string& expresion) {
    stack<char> pila;

    for (size_t i = 0; i < expresion.length(); ++i) {
        char caracter = expresion[i];
        if (caracter == '(') {
            pila.push(caracter);
        } else if (caracter == ')') {
            if (pila.empty() || pila.top() != '(') {
                return false; // Hay un cierre sin un par�ntesis de apertura correspondiente
            }
            pila.pop();
        }
    }

    return pila.empty(); // La pila debe estar vac�a para que est�n balanceados todos los par�ntesis
}

int main() {
    string expresion;

    // Pedir al usuario que introduzca la expresi�n
    cout << "Introduce una expresion con parentesis para verificar su balanceo: ";
    getline(cin, expresion); // Leer toda la l�nea introducida por el usuario

    // Verificar el balanceo de par�ntesis
    if (verificarBalanceoParentesis(expresion)) {
        cout << "La expresion esta balanceada." << endl;
    } else {
        cout << "La expresion no esta balanceada." << endl;
    }
    return 0;
}





