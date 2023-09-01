#include <iostream>
#include <cmath> // Para a função sqrt
#include <iomanip> // Para manipulação de formatação
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

    // d. Calcula a distância euclidiana do ponto (x, y) ao centro de coordenadas
    z = sqrt(x * x + y * y);

    cout << fixed << setprecision(2); // Formata a saída com 2 casas decimais
    cout << "d. Distância euclidiana ao centro de coordenadas: " << z << endl;

    // f. Calcula o produto entre x e y e imprime o resultado em notação científica
    z = x * y;

    cout << "f. Produto entre x e y em notação científica: " << scientific << z << endl;

    return 0;
}
