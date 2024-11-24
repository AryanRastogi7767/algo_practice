#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector< int > p(n, 0);
  // vector<int> ans;
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    p[i]--;
  }
  for (int i = 0; i < n; i++) {
    vector< int > holes(n, 0);
    int j = i;
    while (holes[j] != 1) {
      holes[j]++;
      j = p[j];
    }
    cout << j + 1 << " ";
  }

  return 0;
}
