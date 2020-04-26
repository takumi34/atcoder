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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string S;
  cin >> S;

  ll N = S.size();

  vector<long long> v(2019, 0);
  long long t = 1;
  long long c = 0;
  v[c]++;
  rep(i,N){
    c = (c + (S[N - i - 1] - '0') * t) % 2019;
    t = (t * 10) % 2019;
    v[c]++;
  }
  long long res = 0;
  rep(i, 2019) {
    res += v[i] * (v[i] - 1) / 2;
  }

  cout << res << endl;
}