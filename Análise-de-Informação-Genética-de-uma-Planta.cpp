#include <iostream>
using namespace std;

int main() {
    // a. Lê a informação genética de uma planta na forma de um caractere sem sinal (unsigned char)
    unsigned char informacao_genetica;
    cout << "Digite a informação genética da planta (um valor entre 0 e 255): ";
    cin >> informacao_genetica;

    // b. Identifica quantos dos genes estudados estão presentes
    int genes_presentes = 0;
    for (int i = 0; i < 8; i++) {
        if (informacao_genetica & (1 << i)) {
            genes_presentes++;
        }
    }
    cout << "Quantidade de genes presentes nesta planta: " << genes_presentes << endl;

    // c. Solicita ao usuário o número de um gene específico (1 a 8) e verifica se está presente
    int numero_gene;
    cout << "Digite o número do gene que deseja verificar (1 a 8): ";
    cin >> numero_gene;

    if (numero_gene >= 1 && numero_gene <= 8) {
        bool presente = informacao_genetica & (1 << (numero_gene - 1));
        if (presente) {
            cout << "O gene " << numero_gene << " está presente nesta planta." << endl;
        } else {
            cout << "O gene " << numero_gene << " não está presente nesta planta." << endl;
        }
    } else {
        cout << "Número de gene inválido. Deve ser entre 1 e 8." << endl;
    }

    return 0;
}
