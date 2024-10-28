#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, w;
  cin >> n >> w;
  vector< int > weights(n, 0);
  vector< long long int > profits(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> weights[i] >> profits[i];
  }
  vector< vector< long long int > > t;
  return 0;
}
