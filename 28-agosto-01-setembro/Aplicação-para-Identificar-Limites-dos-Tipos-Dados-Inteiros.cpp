#include <iostream>
#include <limits>
using namespace std;

int main() {
    // Parte A - Tipo int
    int menor_valor_int = numeric_limits<int>::min();
    int maior_valor_int = numeric_limits<int>::max();
    
    cout << "Tipo int:" << endl;
    cout << "Menor valor: " << menor_valor_int << endl;
    cout << "Maior valor: " << maior_valor_int << endl;
    
    // Parte B - Tipo unsigned long int
    unsigned long int menor_valor_uli = numeric_limits<unsigned long int>::min();
    unsigned long int maior_valor_uli = numeric_limits<unsigned long int>::max();
    
    cout << "Tipo unsigned long int:" << endl;
    cout << "Menor valor: " << menor_valor_uli << endl;
    cout << "Maior valor: " << maior_valor_uli << endl;
    
    return 0;
}
