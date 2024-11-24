#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, k;
    cin >> n >> k;

    int bridges = (n * (n - 1)) / 2;
    if (bridges == k)
      cout << "1\n";
    else if (bridges == 0)
      cout << n << "\n";
    else if (k >= n - 1)
      cout << "1\n";
    else {
      cout << n << "\n";
    }
  }
  return 0;
}
