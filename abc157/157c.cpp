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

  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(m, vector<int>(1));
  rep(i, m) { cin >> a[i][0] >> a[i][1]; }

  rep(i, 1000) {
    string s = to_string(i);
    int keta = s.size();

    if (n != keta) {
      continue;
    }

    bool flag = 1;
    rep(j, m) {
      if (s[a[j][0] - 1] - '0' != a[j][1]) {
        flag = 0;
        break;
      }
    }
    if (flag) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}