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

  vector<int> red(n);
  vector<int> blue(n);

  rep(i, n) {
    int a;
    char s;
    cin >> a >> s;

    if (s == 'R') {
      red.push_back(a);
    } else {
      blue.push_back(a);
    }
  }
  sort(all(red));
  sort(all(blue));

  for (int i : red) {
    if (i == 0) continue;
    cout << i << endl;
  }

  for (int i : blue) {
    if (i == 0) continue;
    cout << i << endl;
  }

  return 0;
}