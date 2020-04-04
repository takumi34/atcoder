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

const int dx[8] = { 1, 0, -1, 0, 1, 1, -1, -1 };
const int dy[8] = { 0, 1, 0, -1, 1, -1, -1, 1 };

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int h, w;
  cin >> h >> w;

  vector<vector<char>> vv(h, vector<char>(w));
  rep(i, h) {
    rep(j, w) {
      cin >> vv[i][j];
    }
  }
  rep(i, h) {
    rep(j, w) {
      if (vv[i][j] == '.') {
        int res = 0;
        for (int dir = 0; dir < 8; dir++) {
          int nh = i + dy[dir];
          int nw = j + dx[dir];

          if (nh < 0 || nh >= h || nw < 0 || nw >= w) continue;
          if (vv[nh][nw] == '.') continue;
          if (vv[nh][nw] == '#') res++;
        }
        cout << res;
      } else {
        cout << '#';
      }
    }
    cout << endl;
  }

  return 0;
}