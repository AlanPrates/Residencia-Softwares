#include <iostream>
#include <limits>
using namespace std;

int main() {
    // Parte A: Tipo int
    int menor_valor_int = numeric_limits<int>::min();
    int maior_valor_int = numeric_limits<int>::max();
    
    cout << "Parte A: Tipo int" << endl;
    cout << "Menor valor: " << menor_valor_int << endl;
    cout << "Maior valor: " << maior_valor_int << endl;

    // Parte B: Atribuição de valores entre tipos int e unsigned long int
    unsigned long int uli;
    long int li;

    uli = maior_valor_int;
    li = uli;

    cout << "Parte B:" << endl;
    cout << "Valor original de uli (unsigned long int): " << uli << endl;
    cout << "Valor atribuído a li (long int): " << li << endl;

    // Parte C: Maior valor que pode ser armazenado em um long int
    long int menor_valor_long_int = numeric_limits<long int>::min();
    long int maior_valor_long_int = numeric_limits<long int>::max();

    cout << "Parte C - Tipo long int" << endl;
    cout << "Menor valor: " << menor_valor_long_int << endl;
    cout << "Maior valor: " << maior_valor_long_int << endl;

    return 0;
}
