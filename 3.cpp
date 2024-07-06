#include <iostream>
using namespace std;

int main(){
	
	string texto;
	cout << "Escriba algo: ";
	getline(cin, texto); //para que lea toda la linea y no la primera palabra
	int tamano=texto.length(); //para tener el tamano de toda la linea y no de la primera palabra
	
	char letra;
	cout << "Indique la letra a contar: ";
	cin >> letra;
	int contadordeletra=0;
	
	for(int i=0; i<tamano; i++){
		if(texto[i]==letra){
			contadordeletra++;
		}
	}
	cout << "La letra '" << letra << "' se repite " << contadordeletra << " veces.";
	return 0;
}
