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

  string s;
  cin >> s;
  bool flag = true;
  int n = s.size();
  rep(i, n) {
    if (s[i] == 'o' || s[i] == 'k' || s[i] == 'u') {
      continue;
    } else if (s[i] == 'c') {
      if (i < n - 1) {
        if (s[i + 1] == 'h') {
          i++;
          continue;
        } else {
          flag = false;
          break;
        }
      } else {
        flag = false;
        break;
      }
    } else {
      flag = false;
      break;
    }
  }

  cout << (flag ? "YES" : "NO") << endl;

  return 0;
}