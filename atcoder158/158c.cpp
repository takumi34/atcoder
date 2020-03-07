#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;
typedef pair<int, int> P;

int main() {
  int n, m;
  cin >> n >> m;
  int ans = -1;
  rep(i, 1000000) {
    if (int(i * 0.08) == n) {
      if (int(i * 0.1) == m) {
        ans = i;
        break;
      }
    }
  }
  cout << ans << endl;

  return 0;
}