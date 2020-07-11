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

  int x, n;
  cin >> x >> n;

  vector<int> v(n);
  rep(i, n) { cin >> v[i]; }

  int back = 101;

  for (int i = x; i <= 100; i++) {
    auto result = find(all(v), i);
    if (result == v.end()) {
      back = i;
      break;
    } else {
      continue;
    }
  }

  debug(back);

  int front = 0;

  for (int i = x; i >= 1; i--) {
    auto result = find(all(v), i);
    debug(i);
    if (result == v.end()) {
      front = i;
      break;
    } else {
      continue;
    }
  }
  debug(front);

  if(n == 0){
      cout << x << endl;
      return 0;
  }

  int res = abs(front - x) <= abs(back - x) ? front : back;

  cout << res << endl;

  return 0;
}