#include <iostream>
int main()
{
    int num;
    std::cout << "Digite um numero inteiro: ";
    std::cin >> num;

    std::cout << "Divisores de " << num << ": ";
    for (int i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            std::cout << i << " ";
        }
    }
    return 0;
}