#include <iostream>
using namespace std;

int main(){
	
	char arr[100]="caceres patrinomio de la humanidad";
	int tamano=sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<tamano; i++){
		arr[0]=toupper(arr[0]);
		if(arr[i] == ' '){
			arr[i+1]=toupper(arr[i+1]);
		}
		cout << arr[i];
	}
	return 0;
}
