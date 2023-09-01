# include <iostream>
using namespace std;
int main(){
    int A, B;

    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B ";
    cin >> B;

    int soma = A + B;
    int subtração = A - B;
    int multiplicação =  A * B;
    float divisão = static_cast<float> (A) / B;

    int resto = A % B;

    cout << "Soma = " << soma << endl;
    cout << "subtração = " << subtração << endl;
    cout << "multiplicação = " << multiplicação << endl;
    cout << "divisao = " << divisão << endl;

    return 0;
}