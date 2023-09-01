#include <iostream>
using namespace std;

int main() {
    // a. Declaração de variáveis int
    int a, b, c;

    // b. Solicita ao usuário para digitar dois números inteiros e atribui a e b
    cout << "Digite o primeiro número inteiro (a): ";
    cin >> a;

    cout << "Digite o segundo número inteiro (b): ";
    cin >> b;

    // c. Atribui à variável c a soma de a e b e imprime o resultado em formato hexadecimal
    c = a + b;
    cout << "c = a + b em formato hexadecimal: " << hex << c << endl;

    // d. Atribui à variável c o produto de a e b e imprime o resultado em formato octal
    c = a * b;
    cout << "c = a * b em formato octal: " << oct << c << endl;

    return 0;
}
