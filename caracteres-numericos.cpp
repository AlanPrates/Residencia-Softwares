#include <iostream>
using namespace std;

int main() {
  for (char a = '0'; a <= '9'; a++) {

    cout << "'";
    cout << a;
    cout << "' - ";
    cout << (int)a;
    cout << endl;
  }

  return 0;
}
