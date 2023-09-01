#include <iostream>
using namespace std;

int main() {
    // a. Solicita ao usuário fornecer um número inteiro e armazena em uma variável int
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // b. Verifica se o valor pode ser representado como short int e imprime o resultado
    cout << "O valor fornecido, " << numero << (numero > SHRT_MAX ? " e maior que um short int." : " pertence ao intervalo dos short int.") << endl;

    return 0;
}
