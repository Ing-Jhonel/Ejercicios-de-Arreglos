#include <iostream>
#include <vector>
using namespace std;

int main() {
	
    int arr[] = {1, 2, 3, 4, 5};
    int arr_tamano= sizeof(arr) / sizeof(int);
    vector<int> vec(arr, arr + arr_tamano);

    cout << "Vector original: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    if (!vec.empty()) {
        int lastElement = vec.back();
        for (int i = vec.size() - 1; i > 0; --i) {
            vec[i] = vec[i - 1];
        }
        vec[0] = lastElement;
    }

    cout << "Vector rotado: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}

