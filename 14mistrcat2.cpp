#include <iostream>
using namespace std;

void mistrcat(char* str1, const char* str2) {
    // Encontrar la longitud de str1 manualmente
    
    // 0. CREAR FUNCION QUE AGREGUE STR2 A STR1
    // 0.1 hallar el tamaño de str1
    int tamano_str1 = 0;
    while (str1[tamano_str1] != '\0') { // para saber cuantos caracteres tiene el str1, por cada indice, se suma +1
    // al contador de caracteres
        tamano_str1++;
    }
	
    // 0.2 Inicializamos los índices
    int i = 0;
    int j = tamano_str1;

    // 0.3 Concatenar str2 a str1 (fucionar ambos arreglos "str1 str2"
    while (str2[i] != '\0') {
        str1[j] = str2[i];
        i++;
        j++;
    }
    
    // 0.4 Agregar el carácter nulo al final de str1 (obligatorio)
    str1[j] = '\0';
}

int main() {
	
	//1. DECLARAR ARREGLOS CON SUS LIMITES
    char str1[100];
    char str2[100];

	//2. LEER STR1 Y STR2
    cout << "Ingrese str1: ";
    cin >> str1;
    cout << "Ingrese str2: ";
    cin >> str2;
    cout << endl;

	//3. LLAMAR FUNCION
    mistrcat(str1, str2);  // Llama a la función para concatenar str2 a str1

	//4. MOSTRAR NUEVO STR1
    cout << "Union de ambos str1 en un solo: " << str1 << endl;  // Imprime el resultado de la concatenación

    return 0;
}

