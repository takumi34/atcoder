#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << ": " << x << '\n'

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<ll> v;
  repi(i, 1, 10) { v.push_back(i); }

  while (1) {
    if (n <= v.size()) {
      cout << v[n - 1] << endl;
      return 0;
    }

    n -= v.size();

    vector<ll> vo;
    swap(vo, v);

    for (ll x : vo) {
      repi(i, -1, 2) {
        int d = x % 10 + i;
        if (d < 0 || d > 9) continue;
        ll xx = x * 10 + d;
        v.push_back(xx);
      }
    }
  }

  return 0;
}