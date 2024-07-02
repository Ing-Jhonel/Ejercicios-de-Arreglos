#include <iostream>
using namespace std;

// str = llamado asi a los conjunto de caracteres o palabras (es una variable, asi que su nombre
// no afecta en nada)

void mistrcpy(char* str1, const char* str2) {//tiene el *porque sera modificado despues
// el const es opcional pero indica eso que esta variable no cambiara por nada y asegura eso

	//0. CREAR FUNCION QUE CAMBIE CARACTERES DE STR2 A STR1
	int i;
	for(i=0; str2[i]!='\0'; i++){
		str1[i]=str2[i];
    }
    
    // Añadir el caracter nulo al final de str1 (necesario para que el programa 
	// sepa que es el final de la cadena)
    str1[i]='\0';
}

int main() {
	
	//1. DECLARAR ARREGLOS STR1 Y STR2 (con su respectivo limite, siempre)
    char str1[100];
    char str2[100];
    
    //2. PEDIR DATOS
    cout << "Ingrese str1: ";
    cin >> str1;
    cout << "Ingrese str2: ";
    cin >> str2;
    cout << endl;
    
    //3. LLAMAR A LA FUNCION
    mistrcpy(str1, str2);
    
    //4. MOSTRAR EL RETORNO DE LA FUNCION
    cout << "Ahora str1 es str2" << endl << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    return 0;
}

