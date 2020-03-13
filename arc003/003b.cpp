#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;
typedef pair<int, int> P;

int main() {
  int n;
  cin >> n;

  vector<string> v(n);
  rep(i, n) {
    cin >> v[i];
    reverse(all(v[i]));
  }

  sort(all(v));

  rep(i, n) {
    reverse(all(v[i]));
    cout << v[i] << endl;
  }

  return 0;
}