#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;
typedef pair<int, int> P;

int main() {
  string s;

  int n;

  cin >> s;
  cin >> n;

  deque<string> v(1000000);
  v.push_back(s);
  int re = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (a == 1) {
      re++;
      continue;
    } else {
      int b;
      string c;

      cin >> b >> c;

      if (re % 2 == 1) {
        if (b == 1) {
          v.push_back(c);
        } else {
          v.push_front(c);
        }
      } else {
        if (b == 1) {
          v.push_front(c);
        } else {
          v.push_back(c);
        }
      }
    }
  }
  string ans;
  for (string kk : v) {
    ans += kk;
  }
  if (re % 2 == 1) {
    reverse(all(ans));
  }

  cout << ans << endl;
}