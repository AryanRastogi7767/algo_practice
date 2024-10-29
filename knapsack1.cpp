#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  int w;
  cin >> n >> w;
  vector< int > weights(n, 0);
  vector< long long int > profits(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> weights[i] >> profits[i];
  }
  vector< vector< long long > > T(n + 1, vector< long long >(w + 1, 0));

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= w; j++) {
      if (j >= weights[i - 1] &&
          (profits[i - 1] + T[i - 1][j - weights[i - 1]]) > T[i - 1][j]) {
        T[i][j] = profits[i - 1] + T[i - 1][j - weights[i - 1]];
      } else {
        T[i][j] = T[i - 1][j];
      }
    }
  }
  cout << T[n][w];
  // for (int i = 0; i < n + 1; i++) {
  //   for (int j = 0; j < w + 1; j++) {
  //     cout << T[i][j] << " ";
  //   }
  //   cout << "\n";
  // }

  return 0;
}
