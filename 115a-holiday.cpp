#include <iostream>
#include <vector>
using namespace std;

vector< int > supervisor;

int find_depth(int depth, int emp) {
  if (supervisor[emp] == -1) {
    return depth;
  }
  return find_depth(depth + 1, supervisor[emp]);
}

int main() {
  int n;
  cin >> n;

  supervisor.push_back(-1);
  for (int i = 1; i <= n; i++) {
    int temp;
    cin >> temp;
    supervisor.push_back(temp);
  }
  int max_depth = 1;
  for (int i = 0; i <= n; i++) {
    int depth = 1;
    int emp = i;

    depth = find_depth(depth, emp);
    if (depth > max_depth) max_depth = depth;
  }
  cout << max_depth;

  return 0;
}
