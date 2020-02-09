#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> v(N);
  for (int i = 0; i < N; i++) {
    cin >> v.at(i);
  }

  sort(v.begin(), v.end());
  for (int i = 0; i < N - 1; i++) {
    if (v.at(i) == v.at(i + 1)) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}