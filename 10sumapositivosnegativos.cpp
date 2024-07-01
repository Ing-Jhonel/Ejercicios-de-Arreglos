#include <iostream>
using namespace std;

int main(){
	
	//1. LEER CANTIDAD DE ELEMENTOS A INGRESAR
	int n;
	cout << "SUMA LOS POSITIVOS Y NEGATIVOS DE TUS ELEMENTOS" << endl;
	cout << "***********************************************" << endl << endl;
	cout << "Indique la cantidad de elementos que quiere ingresar: ";
	cin >> n;
	int arreglo[n];
	
	cout << endl;
	//2. PEDIR CADA ELEMENTO Y ALMACENARLOS EN UN ARREGLO
	int sumanegativos=0, sumapositivos=0;
	for(int i=0; i<n; i++){
		cout << "Elemento " << i+1 << ": ";
		cin >> arreglo[i];
		// 3. SUMAR LOS NEGATIVOS Y POSITIVOS
		if(arreglo[i]>0){
			sumapositivos+=arreglo[i];
		} else{
			sumanegativos+=arreglo[i];
		}
	}
	
	cout << endl;
	//4. IMPRIMIR 
	cout << "Suma de los elementos positivos: " << sumapositivos << endl;
	cout << "Suma de los elementos negativos: " << sumanegativos << endl;
	return 0;
}

// SE PODRIA REEMPLAZAR EL ARREGLO[i] POR UN UNA VARIABLE "num", la diFERENCIA ES DESPUES NO PODREMOS USAR CADA ELEMENTO INGRESADO
