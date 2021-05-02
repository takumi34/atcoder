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

  string a;
  cin >> a;

  ll b = a.size();
  string dd;
  string c;

  if(b<=1){
      cout << 0 << endl;
      return 0;
  }

  if (b % 2 == 1) {
    ll bb = b - 1;
    rep(i, bb) { dd += "9"; }

    c = dd.substr(0, bb / 2);
    cout << c << endl;
    return 0;

  } else {
    c = a.substr(0, b / 2);
  }

  ll e = stoll(c);
  ll g = stoll(a);
  ll cc = stoll(c + c);

  if (g >= cc) {
    cout << e << endl;
  } else {
    cout << e - 1 << endl;
  }

  return 0;
}