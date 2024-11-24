#include <math.h>

#include <iostream>
using namespace std;

bool isPrime(int k) {
  if (k <= 1) return false;
  for (int i = 2; i <= sqrt(k); i++) {
    if (k % i == 0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i < 1000; i++) {
    int num = (n * i) + 1;

    if (!isPrime(num)) {
      cout << i << "\n";
      break;
    }
  }
  return 0;
}
