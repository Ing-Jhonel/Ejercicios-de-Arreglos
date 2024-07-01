#include <iostream>
#include <vector>
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
	
	//3. IMPRIMIR VECTOR ORIGINAL
    cout << "Vector original: ";
    for (size_t i = 0; i < vec.size(); ++i) { // recorre todos los elementos del vector vec
    //  vec.size() es el tamaño del vector
        cout << vec[i] << " ";
    }
    cout << endl;
    
    //4. ROTAR EL VECTOR
    if (!vec.empty()) {
        int lastElement = vec.back();
        for (int i = vec.size() - 1; i > 0; --i) {
            vec[i] = vec[i - 1];
        }
        vec[0] = lastElement;
    }
	
	//5. IMPRIMIR VECTOR ROTADO
    cout << "Vector rotado: ";
    for (size_t i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
