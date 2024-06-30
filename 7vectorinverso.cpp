#include <iostream>
#include <vector>
#include <algorithm> // para std::reverse

using namespace std;

int main() {
	
    //1.DECLARAR ARREGLO
    int arr[] = {1, 2, 3, 4, 5};
    int arr_tamano = sizeof(arr) / sizeof(int); // o sizeof(arr[0]));
    // "sizeof(arr) / sizeof(int)" = (tamaño en bytes de arr)/(tamaño en bytes de un elemento int)
	// (tamaño en bytes de arr)/(tamaño en bytes de un elemento int) = (4bytes*5)/(4bytes) = 5 
	
    //2. CREAR VECTOR Y GENERAR RANGO
    vector<int> vec(arr, arr + arr_tamano);
    // el vector es de tipo int, llamado "vec", con rango de "arr", "arr_tamaño" 
    // si:  arr + x = arr[x]
	// arr_tamaño = arr + 5 = "arr[5]"
	
	// osea al final seria   
	// vector<int> vec(arr, arr + 5) o "vector<int> vec(arr[0], arr[5])"; siendo estos el rango (inicio, final) o (begin, end)
	
	
    //3. INVERTIR EL VECTOR
    reverse(vec.begin(), vec.end());
	// con std::reverse lo que hacemos es revertir los elementos entre el inicio y el final (rango) o begin y end (0 y 5)
	// ejemlo de reverse con arreglos
	// 	int arr[]={1,2,3,4,5};
	//	reverse(arr, arr + 5);
	
    //4. IMPRIMIR EL VECTOR INVERTIDO
    // std:: reverse ya invirtio los elementos, asi que los imprimiremos
    cout << "Vector invertido: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
