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

const long double PI = 3.14159265358979323846264338327950L;
// ----------------------------------------------

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b, h, m;

  cin >> a >> b >> h >> m;

  long double jdeg = (long double)(h * 60 + m) / 720 * 2 * PI;

  long double bdeg = (long double)(m) / 60 * 2 * PI;

  long double bt = jdeg - bdeg;

  long double ans2 =
      (long double)(a * a + b * b) - (long double)(2 * a * b) * cos(bt);
  printf("%.10Lf\n", sqrtl(ans2));

  return 0;
}