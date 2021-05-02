#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, n) for (int i = 1; i <= (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define uniqueV(x)                                                             \
  sort(x.begin(), x.end());                                                    \
  x.erase(unique(x.begin(), x.end()), x.end());
#define debug(x) cerr << #x << ": " << x << '\n'
#define debug2(x, y)                                                           \
  cerr << "(" << #x << ", " << #y << ") = "                                    \
       << "(" << x << ", " << y << ")" << '\n'

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

// ----------------------------------------------

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b, w;
  cin >> a >> b >> w;

  w *= 1000;

  int ans_min = inf;
  int ans_max = 0;

  bool flag = false;

  repi(i, 1, 1e6 + 1) {
    if (a * i <= w && w <= b * i) {
      ans_min = min(ans_min, i);
      ans_max = max(ans_max, i);
      flag = true;
    }
  }

  if (flag) {
    cout << ans_min << " " << ans_max << endl;
  } else {
    cout << "UNSATISFIABLE" << endl;
  }

  return 0;
}