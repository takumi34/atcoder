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
  ll a, b, x;
  cin >> a >> b >> x;

  ll left = 0;
  ll right = inf + 1;

  ll ans = 0;
  while (right - left > 1) {
    ll mid = left + (right - left) / 2;

    int keta = to_string(mid).length();
    ll sum = a * mid + b * keta;

    if (sum <= x) {
      left = mid;
      ans = mid;
    } else {
      right = mid;
    }
  }

  cout << ans << endl;

  return 0;
}