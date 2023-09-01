#include <iostream>
#include <string>
using namespace std;

int main(){
    std::string nome_do_usuário;
    std::cout << "Digite seu nome: ";
    std::cin >> nome_do_usuário;
    std::cout << "Bom dia, "<< nome_do_usuário << "!"<< std::endl;
    return 0;
}