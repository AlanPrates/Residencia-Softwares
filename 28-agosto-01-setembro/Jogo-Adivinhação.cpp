#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0)); // Inicializa o gerador de números aleatórios com o tempo atual

    int numeroAleatorio = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100
    int palpite;
    int tentativas = 0;

    std::cout << "Bem-vindo ao jogo de adivinhação!\n";
    std::cout << "Tente adivinhar o número entre 1 e 100.\n";

    do
    {
        std::cout << "Digite seu palpite: ";
        std::cin >> palpite;
        tentativas++;

        if (palpite < numeroAleatorio)
        {
            std::cout << "Palpite baixo. Tente novamente.\n";
        }
        else if (palpite > numeroAleatorio)
        {
            std::cout << "Palpite alto. Tente novamente.\n";
        }
        else
        {
            std::cout << "Parabéns! Você acertou o número em " << tentativas << " tentativas.\n";
        }
    } while (palpite != numeroAleatorio);

    return 0;
}
