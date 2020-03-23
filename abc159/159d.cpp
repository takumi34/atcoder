#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

ll calc(ll n) {
  ll num = 1;
  for (ll i = 1; i <= 2; i++) {
    num = num * (n - i + 1) / i;
  }
  return num;
}

int main() {
  ll n;
  cin >> n;

  vector<ll> v(n);
  rep(i, n) {
    cin >> v[i];
  }

  map<ll, ll> mm;

  rep(i, n) {
    mm[v[i]]++;
  }
  ll as = 0;
  for (auto x : mm) {
    if (x.second >= 2) {
      as += calc(x.second);
    }
  }

  rep(i, n) {
    ll aiu = mm[v[i]];
    if (aiu == 2) {
      cout << as - calc(2) << endl;
    } else {
      cout << as - calc(aiu) + calc(aiu - 1) << endl;
    }
  }

  return 0;
}