#include <iostream>
using namespace std;

int main(){
	
	string lineadetexto;
	getline(cin, lineadetexto); //lee la linea completa completa, incluyendo espacios
	//usar cuando metamos mas de una palabra
	
	int tamano=lineadetexto.length(); //obtener la longitud de la cadena
	
	for(int i=0; i<tamano; i++){
		if(lineadetexto[i]== ' '){
			cout << endl;
		}else{
			cout << lineadetexto[i]; // pongo el else para que no se imprima los espacios en blanco ' '
		}
	}
	return 0;
}
