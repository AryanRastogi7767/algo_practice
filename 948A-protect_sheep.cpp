#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isSafe(int i, int j, int r, int c) {
  if (i < r && j < c && i >= 0 && j >= 0) return true;
  return false;
}

int main() {
  int r, c;
  cin >> r >> c;
  vector< pair< int, int > > direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
  vector< vector< char > > pasture(r, vector< char >(c, '.'));
  bool possible = true;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      char temp;
      cin >> temp;
      pasture[i][j] = temp;
    }
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (pasture[i][j] == 'W') {
        for (auto &dir : direction) {
          int i_ = i + dir.first;
          int j_ = j + dir.second;
          if (isSafe(i_, j_, r, c)) {
            if (pasture[i_][j_] == 'S')
              possible = false;
            else if (pasture[i_][j_] == '.')
              pasture[i_][j_] = 'D';
            else
              continue;
          }
        }
      }
    }
  }
  if (!possible)
    cout << "NO\n";
  else {
    cout << "YES\n";
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cout << pasture[i][j];
      }
      cout << "\n";
    }
  }

  return 0;
}
