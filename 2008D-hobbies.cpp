#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dfs(int count, int num, vector< char > &color, vector< int > &parent) {
  if (num == parent[num]) {
    if (color[num] == '1')
      return count;
    else
      return count + 1;
  }

  if (color[num] == '1')
    return dfs(count, parent[num], color, parent);
  else
    return dfs(count + 1, parent[num], color, parent);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector< int > parent(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> parent[i];
      parent[i]--;  // Convert from 1-based to 0-based indexing
    }
    string s;
    vector< char > color(n, ' ');
    cin.ignore();
    getline(cin, s);
    cout << s;
    for (int i = 0; i < n; i++) {
      color[i] = s[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
      cout << dfs(count, i, color, parent) << " ";
    }
  }

  return 0;
}
