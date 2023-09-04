#include <iostream>
using namespace std;

int main() {

    // Parte d: Atribuir à variável ch2 o caractere 81 e imprimir em diferentes formatos
    char ch2 = 81;

    cout << "Parte d:" << endl;
    cout << "Caractere em formato decimal: " << static_cast<int>(ch2) << endl;
    cout << "Caractere em formato octal: " << oct << static_cast<int>(ch2) << endl;
    cout << "Caractere em formato hexadecimal: " << hex << static_cast<int>(ch2) << endl;
    cout << "Caractere: " << ch2 << endl;

    // Parte e: Atribuir à variável ch3 o caractere correspondente em letra minúscula
    char ch3 = static_cast<char>(tolower(ch2));

    cout << "Parte e:" << endl;
    cout << "Caractere minúsculo em formato decimal: " << static_cast<int>(ch3) << endl;
    cout << "Caractere minúsculo em formato octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "Caractere minúsculo em formato hexadecimal: " << hex << static_cast<int>(ch3) << endl;
    cout << "Caractere minúsculo: " << ch3 << endl;

    return 0;
}
