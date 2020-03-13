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
  string s;
  cin >> s;
  int ans = 0;

  rep(i, n - 2) {
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}