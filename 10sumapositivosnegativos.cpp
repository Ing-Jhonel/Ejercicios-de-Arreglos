#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Indique la cantidad de elementos que quiere ingresar: ";
	cin >> n;
	int arreglo[n];
	
	int sumanegativos=0, sumapositivos=0;
	for(int i=0; i<n; i++){
		cout << "Elemento " << i+1 << ": ";
		cin >> arreglo[i];
		if(arreglo[i]>0){
			sumapositivos+=arreglo[i];
		} else{
			sumanegativos+=arreglo[i];
		}
	}
	cout << "Suma de los elementos positivos: " << sumapositivos << endl;
	cout << "Suma de los elementos negativos: " << sumanegativos << endl;
	return 0;
}
