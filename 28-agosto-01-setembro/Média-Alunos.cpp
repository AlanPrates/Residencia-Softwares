#include <iostream>

int main()
{
    char continuar;

    do
    {
        long long matricula;
        double nota1, nota2, nota3, media;

        std::cout << "Digite a matrícula do aluno (apenas números): ";
        std::cin >> matricula;

        std::cout << "Digite a primeira nota: ";
        std::cin >> nota1;

        std::cout << "Digite a segunda nota: ";
        std::cin >> nota2;

        std::cout << "Digite a terceira nota: ";
        std::cin >> nota3;

        media = (nota1 + nota2 + nota3) / 3.0;

        std::cout << "MATRICULA NOTA1 NOTA2 NOTA3 MEDIA\n";
        std::cout << "===========================================\n";
        std::cout << matricula << " " << nota1 << " " << nota2 << " " << nota3 << " " << media << "\n";

        std::cout << "Deseja cadastrar outro aluno? (S para Sim, qualquer outra tecla para Não): ";
        std::cin >> continuar;

    } while (continuar == 'S' || continuar == 's');

    return 0;
}
