#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char caractere;
    cout << "Digite um caractere: ";
    cin >> caractere;
    
    int codigo_numerico = static_cast<int>(caractere);
    
    cout << "O código numérico de '" << caractere << "' em decimal é: " << codigo_numerico << endl;
    cout << "O código numérico de '" << caractere << "' em octal é: " << oct << codigo_numerico << endl;
    cout << "O código numérico de '" << caractere << "' em hexadecimal é: " << hex << codigo_numerico << endl;
    
    return 0;
}
