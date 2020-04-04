#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << ": " << x << '\n'

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, d, x;
  cin >> n >> d >> x;
  vector<int> v(n);
  rep(i, n) { cin >> v[i]; }

  int sum = 0;

  rep(i, n) {
    if (v[i] > d) {
      continue;
    } else {
      int j = 2;
      int dd = v[i];
      v[i] = v[i] + 1;
      while (v[i] <= d) {
        debug(v[i]);

        v[i] = (dd * j) + 1;
        sum++;
        j++;
      }
    }
  }

  cout << sum + n + x << endl;

  return 0;
}