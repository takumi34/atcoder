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

int divide2(int n) {
  int num = 0;
  while (n % 2 == 0) {
    n = n / 2;
    num++;
  }
  return num;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  int tmp = 0;

  int ans = 1;

  for (int i = 2; i <= n; i = i + 2) {
    int a = divide2(i);
    if (tmp <= a) {
      ans = i;
      tmp = a;
    }
  }

  cout << ans << endl;

  return 0;
}