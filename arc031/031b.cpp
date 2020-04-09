#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, n) for (int i = 1; i <= (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define uniqueV(x)          \
  sort(x.begin(), x.end()); \
  x.erase(unique(x.begin(), x.end()), x.end());
#define debug(x) cerr << #x << ": " << x << '\n'
#define debug2(x, y) cerr << "(" << #x << ", " << #y << ") = " \
                          << "(" << x << ", " << y << ")" << '\n'

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

// ----------------------------------------------

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };

string field[10];
bool seen[10][10];

void dfs(int h, int w) {
  seen[h][w] = true;

  rep(dir, 4) {
    int nh = h + dx[dir];
    int nw = w + dy[dir];

    if (nh < 0 || nh >= 10 || nw < 0 || nw >= 10) continue;
    if (field[nh][nw] == 'x') continue;

    if (seen[nh][nw]) continue;

    dfs(nh, nw);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  rep(i, 10) {
    cin >> field[i];
  }

  rep(x, 10) {
    rep(y, 10) {
      if (field[x][y] == 'x') {
        field[x][y] = 'o';
      } else {
        continue;
      }

      memset(seen, 0, sizeof(seen));

      int res = 0;
      rep(i, 10) {
        rep(j, 10) {
          if (!seen[i][j] && field[i][j] == 'o') {
            dfs(i, j);
            res++;
          }
        }
      }

      if (res == 1) {
        cout << "YES" << endl;
        return 0;
      }

      field[x][y] = 'x';
    }
  }

  cout << "NO" << endl;

  return 0;
}