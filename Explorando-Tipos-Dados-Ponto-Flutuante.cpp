#include <iostream>
#include <limits>
#include <iomanip> // Para manipulação de formatação
using namespace std;

int main() {
    // Parte C: Formatação da saída para pif (float) com diferentes casas decimais
    float pif = 3.14159265358979323846f;
    
    cout << "Parte C: Formatação da saída para pif (float)" << endl;
    cout << "2 casas decimais: " << fixed << setprecision(2) << pif << endl;
    cout << "4 casas decimais: " << fixed << setprecision(4) << pif << endl;
    cout << "8 casas decimais: " << fixed << setprecision(8) << pif << endl;
    cout << "16 casas decimais: " << fixed << setprecision(16) << pif << endl;

    // Parte D: Valor de pi (double) com alta precisão
    double pid = 3.14159265358979323846;
    
    cout << "Parte D: Valor de pid (double) com alta precisão" << endl;
    cout << "Valor de pid: " << fixed << setprecision(16) << pid << endl;

    // Parte E: Comparação entre pif (float) e pid (double)
    cout << "Parte E: Comparação entre pif (float) e pid (double)" << endl;
    cout << "pif (float) com 2 casas decimais: " << fixed << setprecision(2) << pif << endl;
    cout << "pid (double) com 2 casas decimais: " << fixed << setprecision(2) << pid << endl;
    cout << "pif (float) com 4 casas decimais: " << fixed << setprecision(4) << pif << endl;
    cout << "pid (double) com 4 casas decimais: " << fixed << setprecision(4) << pid << endl;
    cout << "pif (float) com 8 casas decimais: " << fixed << setprecision(8) << pif << endl;
    cout << "pid (double) com 8 casas decimais: " << fixed << setprecision(8) << pid << endl;
    cout << "pif (float) com 16 casas decimais: " << fixed << setprecision(16) << pif << endl;
    cout << "pid (double) com 16 casas decimais: " << fixed << setprecision(16) << pid << endl;

    // Parte F: Diferença entre double e long double
    double valor_double = 0.1;
    long double valor_long_double = 0.1L;
    
    cout << "Parte F: Diferença entre double e long double" << endl;
    cout << "Valor double: " << valor_double << endl;
    cout << "Valor long double: " << valor_long_double << endl;

    return 0;
}
