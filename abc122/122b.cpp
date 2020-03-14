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
  string s;
  cin >> s;

  int n = s.length();
  int ans = 0;

  rep(i, n) {
    if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {
      int a = 0;
      rep(j, n - i) {
        if (s[i + j] == 'A' || s[i + j] == 'C' || s[i + j] == 'G' || s[i + j] == 'T') {
          a++;
          ans = max(ans, a);
          continue;
        }
        break;
      }
    }
  }
  cout << ans << endl;

  return 0;
}