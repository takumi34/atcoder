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
  ll x, y, a, b, c;
  cin >> x >> y >> a >> b >> c;

  vector<ll> pa(a + b + c);
  rep(i, a) { cin >> pa[i]; }

  sort(all(pa), greater<ll>());

  vector<ll> paa(a + b + c);

  rep(i, x) {
    paa[i] = pa[i];
    debug(paa[i]);
  }

  vector<ll> pb(a + b + c);
  rep(i, b) { cin >> pb[i]; }
  sort(all(pb), greater<ll>());

  vector<ll> pc(a + b + c);
  rep(i, c) { cin >> pc[i]; }
  sort(all(pc), greater<ll>());
  vector<ll> pbb(a + b + c);

  rep(i, y) {
    pbb[i] = pb[i];
  }

  vector<ll> sai(a + b + c);

  std::copy(paa.begin(), paa.end(), std::back_inserter(sai));
  std::copy(all(pbb), std::back_inserter(sai));
  std::copy(all(pc), std::back_inserter(sai));

  sort(all(sai), greater<ll>());

  ll ans = 0;

  rep(i, x + y) {
    ans += sai[i];
    debug(sai[i]);
  }

  cout << ans << endl;

  return 0;
}