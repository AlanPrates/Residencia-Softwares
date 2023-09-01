#include <iostream>
using namespace std;

int main(void)
{
  char letra = 'a';
  cout << "A letra " << letra << "corresponde ao valor " << int(letra) << endl;
  cout << "O tipo char ocupa " << sizeof(char) << "bytes na memória.\n";
  letra = -120; 
  cout << "E pode armazenar valores negativos (" << int(letra) << ")." << endl;
  letra = 120;
  cout << "E positivos (" << int(letra) << ")." << endl;
  unsigned char letra2 = 120; //
  signed char letra3 = -120;
  cout << "O tipo unsigned char ocupa " << sizeof(letra2) << "bytes na memória.\n";
  cout << "O tipo signed char ocupa " << sizeof(letra3) << "bytes na memória.\n";
  wchar_t letra4 = L'Ç';
  cout << "O tipo wchar_t ocupa " << sizeof(letra4) << "bytes na memória.\n";
  char16_t letra5 = L'ç';
  cout << "O tipo char16_t ocupa " << sizeof(letra5) << "bytes na memória.\n";
  char32_t letra6 = L'Ç';
  cout << "O tipo char32_t ocupa " << sizeof(letra6) << "bytes na memória.\n";
  return 0;
}
