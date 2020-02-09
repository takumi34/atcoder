#include <bits/stdc++.h>
using namespace std;

int main() {
  string N, M;

  cin >> N >> M;
  int n, m;

  cin >> n >> m;

  string b;
  cin >> b;

  if (N == b) {
    cout << n - 1 << " " << m << endl;
  } else if (M == b) {
    cout << n << " " << m - 1 << endl;
  }
}