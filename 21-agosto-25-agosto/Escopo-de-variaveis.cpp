#include <iostream>
using namespace std;

int valorGlobal = 10; // variável global

int main(void)
{
    int valorLocal = 20; // variavel local
    cout << "Valor local: " << valorLocal << endl;
    //cout e endl são nomes do namespace std
    cout << "Valor global: " << valorGlobal << endl;
}