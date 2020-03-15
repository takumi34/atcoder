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
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int ans = 0;
  rep(i, a + 1) {
    rep(j, b + 1) {
      rep(k, c + 1) {
        if (i * 500 + j * 100 + k * 50 == x) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}