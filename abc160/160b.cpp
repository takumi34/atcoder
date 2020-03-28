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
  ll a;
  cin >> a;

  ll ans = 0;

  if (a >= 500) {
    ans = ans + (a / 500) * 1000;

    if (a % 500 >= 5) {
      ans = ans + (a % 500 / 5) * 5;
    }
  } else {
    if (a >= 5) {
      ans = ans + (a / 5) * 5;
    }
  }

  cout << ans << endl;

  return 0;
}