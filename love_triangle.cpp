#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector< int > likes(n + 1, 0);
  bool flag = false;
  for (int i = 1; i < n + 1; i++) {
    int temp;
    cin >> temp;
    likes[i] = temp;
  }

  for (int i = 1; i < n + 1; i++) {
    if (likes[likes[likes[i]]] == i) {
      flag = true;
      break;
    }
  }

  if (flag)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}
