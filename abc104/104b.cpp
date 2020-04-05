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

  string s;
  cin >> s;

  bool flag = 1;

  int k = 0;

  if (s[0] != 'A') {
    flag = 0;
  } else {
    int n = s.length();
    int count = 0;
    repi(i, 2, n-1) {
      if (s[i] == 'C') {
        count++;
        debug(i);
        debug(count);
        k = i;
      }
    }
    if (count != 1) {
      flag = 0;
    }

    repi(j, 1, n) {
      if (j == k) continue;
      if (!islower(s[j])) {
        flag = 0;
      }
    }
  }

  cout << (flag ? "AC" : "WA") << endl;

  return 0;
}