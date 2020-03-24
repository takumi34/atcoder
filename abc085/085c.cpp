#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << ": " << x << '\n'

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

int main() {
  ll n, y;
  cin >> n >> y;
  ll k = y / 1000;

  rep(i, n + 1) {
    rep(j, n + 1) {
      if (9 * i + 4 * j == k - n) {
        if (n - i - j >= 0) {
          cout << i << " " << j << " " << n - i - j << endl;
          return 0;
        }
      }
    }
  }
  cout << "-1 -1 -1" << endl;

  return 0;
}