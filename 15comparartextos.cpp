#include <iostream>
using namespace std;

int mistrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }

    if (*str1 > *str2) {
        return 1;
    } else if (*str1 < *str2) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    const char* str1 = "Hola";
    const char* str2 = "Hola";
    const char* str3 = "Mundo";
    const char* str4 = "Nose";

    cout << "Comparando " << str1 << " y " << str2 << ": " << mistrcmp(str1, str2) << endl; // 0
    cout << "Comparando " << str1 << " y " << str3 << ": " << mistrcmp(str1, str3) << endl; // -1
    cout << "Comparando " << str3 << " y " << str1 << ": " << mistrcmp(str3, str1) << endl; // 1
    cout << "Comparando " << str1 << " y " << str4 << ": " << mistrcmp(str1, str4) << endl; // 1

    return 0;
}

