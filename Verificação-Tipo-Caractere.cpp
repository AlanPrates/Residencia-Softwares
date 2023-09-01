#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis char
    char ch1, ch2, ch3;

    // Parte B: Solicita ao usuário para digitar um caractere e atribui a ch1
    cout << "Digite um caractere: ";
    cin >> ch1;

    // Parte C: Verifica o tipo do caractere digitado
    // Utilizamos o operador condicional (ternário) para realizar a verificação
    string tipo_caractere = (isupper(ch1) ? "letra maiúscula" :
                            (islower(ch1) ? "letra minúscula" :
                            (isdigit(ch1) ? "dígito" : "outro tipo de caractere")));

    // Exibe o resultado
    cout << "O caractere '" << ch1 << "' é " << tipo_caractere << endl;

    return 0;
}
