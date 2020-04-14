#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, n) for (int i = 1; i <= (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define uniqueV(x)          \
  sort(x.begin(), x.end()); \
  x.erase(unique(x.begin(), x.end()), x.end());
#define debug(x) cerr << #x << ": " << x << '\n'
#define debug2(x, y) cerr << "(" << #x << ", " << #y << ") = " \
                          << "(" << x << ", " << y << ")" << '\n'

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

// ----------------------------------------------

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  string s;
  cin >> s;

  ll r, g, b;
  r = 0;
  g = 0;
  b = 0;

  rep(i, n) {
    if (s[i] == 'R') {
      r++;
    } else if (s[i] == 'G') {
      g++;
    } else {
      b++;
    }
  }

  ll ans = r * g * b;

  rep(i, n) {
    repi(j, i + 1, n) {
      if ((i + j) % 2 == 0) {
        ll k = (i + j) / 2;
        if (s[i] != s[j] && s[j] != s[k] && s[k] != s[i]) {
          ans--;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}