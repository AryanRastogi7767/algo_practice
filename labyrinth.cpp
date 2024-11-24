
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef long long int ll;

bool isSafe(ll x, ll y, ll n, ll m) {
  return (x >= 1 && y >= 1 && x <= n && y <= m);
}

int main() {
  int t;
  cin >> t;

  vector< pair< ll, ll > > directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

  while (t--) {
    int block1 = 0, block2 = 0;
    ll n, m, x1, y1, x2, y2;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;

    for (auto &dir : directions) {
      if (isSafe(x1 + dir.first, y1 + dir.second, n, m)) block1++;
      if (isSafe(x2 + dir.first, y2 + dir.second, n, m)) block2++;
    }

    cout << min(block1, block2) << "\n";
  }

  return 0;
}
