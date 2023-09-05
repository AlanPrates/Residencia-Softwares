#include <iostream>

using namespace std;

int main() {
  for (int i = 2; i <= 100; i++) {
    bool isPrime = true;
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        isPrime = false;
        break;
      }
    }

    if (isPrime) {
      cout << i << endl;
    }
  }

  return 0;
}
