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

bool evenString(string s) {
  string s1 = s;
  string s2 = s;
  int n = s.size();
  if (n % 2 != 0) {
    return 0;
  } else {
    s1.erase(n / 2);
    s2.erase(0, n / 2);
    debug2(s1, s2);
    if (s1 == s2) {
      return 1;
    } else {
      return 0;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;

  int n = s.size();

  for (int i = n - 1; i > 0; i--) {
    s = s.erase(i);

    if (evenString(s)) {
      debug(s);
      cout << s.size() << endl;
      break;
    }
  }

  return 0;
}