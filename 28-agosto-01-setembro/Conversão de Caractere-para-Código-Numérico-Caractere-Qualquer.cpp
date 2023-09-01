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
    
    char caractere_qualquer;
    cout << "Digite um caractere qualquer: ";
    cin >> caractere_qualquer;
    
    int codigo_numerico_qualquer = static_cast<int>(caractere_qualquer);
    
    cout << "O código numérico de '" << caractere_qualquer << "' em decimal é: " << codigo_numerico_qualquer << endl;
    cout << "O código numérico de '" << caractere_qualquer << "' em octal é: " << oct << codigo_numerico_qualquer << endl;
    cout << "O código numérico de '" << caractere_qualquer << "' em hexadecimal é: " << hex << codigo_numerico_qualquer << endl;
    
    return 0;
}
