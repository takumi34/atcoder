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
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll n, m;
  cin >> n >> m;
  vector<ll> v(n);
  ll sum = 0;
  rep(i, n) {
    cin >> v[i];
    sum += v[i];
  }

  sort(all(v), greater<ll>());

  ll res = 0;

  rep(i, m) {
    debug(v[i]);
    if (v[i] * (m * 4) >= sum) {
      res++;
    }
  }

  if (res == m) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}