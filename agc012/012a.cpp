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
  int m = n * 3;

  vector<ll> v(m);
  rep(i, m) { cin >> v[i]; }

  sort(all(v), greater<ll>());
  ll sum = 0;
  rep(i, n) {
    sum += v[1 + 2 * i];
  }
  cout << sum << endl;

  return 0;
}
