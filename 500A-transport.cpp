#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  t--;
  int i = 0;
  bool possible = false;
  vector< int > portal(n, 0);
  for (int i = 0; i < n - 1; i++) {
    cin >> portal[i];
  }
  while (i <= t) {
    if (i == t) {
      possible = true;
      break;
    } else {
      i += portal[i];
    }
  }
  if (!possible)
    cout << "NO\n";
  else
    cout << "YES\n";
  return 0;
}
