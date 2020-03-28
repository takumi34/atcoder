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
  ll k, n;
  cin >> k >> n;

  vector<ll> v(n);
  rep(i, n) { cin >> v[i]; }

  vector<ll> ku(n);

  ku[0] = k - v[n - 1] + v[0];
  rep(i, n - 1) {
    ku[i + 1] = v[i + 1] - v[i];
    debug(ku[i + 1]);
  }
  sort(all(ku));
  ll ans = 0;

  rep(i, n - 1) {
    ans += ku[i];
  }

  cout << ans << endl;

  return 0;
}