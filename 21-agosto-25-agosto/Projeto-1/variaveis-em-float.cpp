#include <iostream>
using namespace std;

int main() {
    float A, B;

    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;

    float soma = A + B;
    float subtracao = A - B;  
    float multiplicacao = A * B;
    float divisao = static_cast<float>(A) / B;

    float resto = static_cast<int>(A) % static_cast<int>(B);

    cout << "Soma = " << soma << endl;
    cout << "Subtracao = " << subtracao << endl;  
    cout << "Multiplicacao = " << multiplicacao << endl;
    cout << "Divisao = " << divisao << endl;
    cout << "Resto = " << resto << endl;

    return 0;
}
