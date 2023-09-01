#include <iostream>
using namespace std;

int main() {
    // a. Declaração de variáveis double
    double x, y, z;

    // b. Solicita ao usuário para digitar dois números de ponto flutuante e atribui a x e y
    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    // c. Verifica em que lado da curva f(x) = 5x + 2 se encontra
    double resultado_curva = 5 * x + 2;
    
    if (y > resultado_curva) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva." << endl;
    } else if (y < resultado_curva) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está na curva." << endl;
    }

    return 0;
}
