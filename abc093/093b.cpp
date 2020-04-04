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

// ----------------------------------------------

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll a, b, k;
  cin >> a >> b >> k;

  if ((b - a + 1) <= k * 2) {
    repi(i, a, b + 1) {
      cout << i << endl;
    }
  } else {
    repi(i, a, a + k) {
      cout << i << endl;
    }

    repi(i, b - k + 1, b + 1) {
      cout << i << endl;
    }
  }

  return 0;
}