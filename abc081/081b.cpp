#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

int main() {
  int n;
  cin >> n;
  vector<ll> v(n);
  rep(i, n) { cin >> v[i]; }
  int kake = 1;

  rep(i, inf) {
    int all = 0;
    rep(j, n) {
      if (v[j] % kake == 0) {
        all++;
        continue;
      } else {
        break;
      }
    }
    if (all == n) {
      kake *= 2;
      continue;
    }
    break;
  }
  int ans = 0;
  while (kake % 2 == 0) {
    ans++;
    kake /= 2;
  }

  cout << ans - 1 << endl;

  return 0;
}