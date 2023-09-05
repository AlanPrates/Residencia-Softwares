#include <iostream>

int main() {
    int altura;

    std::cout << "Digite a altura do padrao: ";
    std::cin >> altura;

    char caractere = 'A';
    int caracteresPorLinha = 1;

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < caracteresPorLinha; j++) {
            std::cout << caractere;
            caractere++;
        }
        std::cout << std::endl;
        caracteresPorLinha++;
    }

    return 0;
}