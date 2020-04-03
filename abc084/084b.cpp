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

  int a, b;
  cin >> a >> b;
  string c;

  cin >> c;

  bool flag = true;

  rep(i, a) {
    if (!(c[i] >= '0' && c[i] <= '9')) {
      flag = false;
    }
  }

  if (c[a] != '-') flag = false;

  repi(i, a + 1, a + b) {
    if (!(c[i] >= '0' && c[i] <= '9')) {
      flag = false;
    }
  }

  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;    
  }

  return 0;
}