#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector< vector< int > > act;
  vector< int > temp(3, 0);

  for (int i = 0; i < n; i++) {
    cin >> temp[0] >> temp[1] >> temp[2];
    act.push_back(temp);
  }
  vector< int > happiness(n, 0);
  happiness[0] = act[0][0] > act[0][1]
                     ? (act[0][0] > act[0][2] ? act[0][0] : act[0][2])
                     : act[0][1];
  for (int i = 1; i < n; i++) {
    if (happiness[i - 1] == act[i - 1][0]) {
      happiness[i] = max(act[i][1], act[i][2]);
    } else if (happiness[i - 1] == act[i - 1][1]) {
      happiness[i] = max(act[i][0], act[i][2]);
    } else {
      happiness[i] = max(act[i][0], act[i][1]);
    }
  }
  cout << happiness[n - 1];
  return 0;
}
