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
  string ss = s;
  string w, x, y;

  string zen;
  zen = s.substr(0, (s.length() - 1) / 2);
  string zenn = zen;
  string kou = s.substr((s.length() + 1) / 2, s.length() - 1);
  string kouu = kou;

  reverse(all(ss));
  reverse(all(zen));
  reverse(all(kou));

  if (s == ss) {
    if (zen == zenn) {
      if (kou == kouu) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}