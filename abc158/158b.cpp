#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;
typedef pair<int, int> P;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;

  ll watta = n / (a + b);
  ll amari = n % (a + b);
  ll ans = 0;

  if (amari == 0) {
    ans = watta * a;
    cout << ans << endl;
    return 0;
  } else if (amari <= a) {
    ans = watta * a + amari;
  } else if (amari > a) {
    ans = watta * a + a;
  }

  cout << ans << endl;

  return 0;
}