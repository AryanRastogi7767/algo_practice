#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int h[n];
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  vector<int> mincost(n, 0);
  mincost[1] = abs(h[1] - h[0]);
  for (int i = 2; i < n; i++) {
    mincost[i] = min(mincost[i - 1] + abs(h[i] - h[i - 1]),
                     mincost[i - 2] + abs(h[i] - h[i - 2]));
  }
  cout << mincost[n - 1];
  return 0;
}
