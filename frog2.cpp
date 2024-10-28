#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  vector<int> mincost(n, 0);
  mincost[1] = abs(h[0] - h[1]);
  for (int i = 2; i < n; i++) {
    int min = INT_MAX;
    for (int j = 1; j <= k; j++) {
      if (mincost[i - j] + abs(h[i - j] - h[i]) < min && (i - j) >= 0) {
        min = mincost[i - j] + abs(h[i - j] - h[i]);
      }
    }
    mincost[i] = min;
    //   cout << mincost[i] << "\n";
  }
  cout << mincost[n - 1];
  return 0;
}
