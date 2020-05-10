#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, n) for (int i = 1; i <= (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define uniqueV(x)                                                             \
  sort(x.begin(), x.end());                                                    \
  x.erase(unique(x.begin(), x.end()), x.end());
#define debug(x) cerr << #x << ": " << x << '\n'
#define debug2(x, y)                                                           \
  cerr << "(" << #x << ", " << #y << ") = "                                    \
       << "(" << x << ", " << y << ")" << '\n'

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

// ----------------------------------------------

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) { cin >> v[i]; }

  map<int, int> mm;

  rep(i, n) {
    if (v[i] <= 399) {
      mm[0]++;

    } else if (v[i] <= 799) {
      mm[1]++;

    } else if (v[i] <= 1199) {
      mm[2]++;
    } else if (v[i] <= 1599) {
      mm[3]++;

    } else if (v[i] <= 1999) {
      mm[4]++;
    } else if (v[i] <= 2399) {
      mm[5]++;

    } else if (v[i] <= 2799) {

      mm[6]++;

    } else if (v[i] <= 3199) {
      mm[7]++;

    } else {
      mm[8]++;
    }
  }

  int isum = 0;

  rep(i, 8) {
    if (mm[i] != 0) { isum++; }
  }
  debug(isum);

  if (isum == 0) {
    cout << 1 << " " << mm[8] << endl;
  } else {
    cout << isum << " " << isum + mm[8] << endl;
  }

  return 0;
}