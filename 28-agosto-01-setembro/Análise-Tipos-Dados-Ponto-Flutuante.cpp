#include <iostream>
#include <limits>
using namespace std;

int main() {
    // Parte A: Tipo float
    float menor_valor_float = numeric_limits<float>::min();
    float maior_valor_float = numeric_limits<float>::max();
    
    cout << "Parte A: Tipo float" << endl;
    cout << "Menor valor representável: " << menor_valor_float << endl;
    cout << "Maior valor representável: " << maior_valor_float << endl;

    // Parte B: Valor de pi com alta precisão
    float pif = 3.14159265358979323846f;
    
    cout << "Parte B: Valor de pi (com alta precisão): " << pif << endl;

    return 0;
}
