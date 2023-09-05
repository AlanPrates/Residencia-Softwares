#include <iostream>

bool isPalidrome(int number)
{
    int originalNumber = number;
    int reverseNumber = 0;

    while (number > 0)
    {
        int digit = number % 10;
        reverseNumber = reverseNumber * 10 + digit;
        number /= 10;
    }
    return originalNumber == reverseNumber;
}
int main()
{
    int num;
    std::cout << "Digite Um Numero: ";
    std::cin >> num;
    if (isPalidrome(num))
    {
        std::cout << " É um palindromo. " << std::endl;
    }
    else
    {
        std::cout << num << "Não é um palindromo. " << std::endl;
    }
    return 0;
}