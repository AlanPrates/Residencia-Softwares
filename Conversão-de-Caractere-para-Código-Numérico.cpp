#include <iostream>
using namespace std;

int main() {
    char caractere;
    cout << "Digite um caractere: ";
    cin >> caractere;
    
    int codigo_numerico = static_cast<int>(caractere);
    
    cout << "O código numérico de '" << caractere << "' é: " << codigo_numerico << endl;
    
    return 0;
}
