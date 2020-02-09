#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  rep(i, n) { cin >> v[i]; }
  int maxx = 0;
  int summ = 0;
  queue<int> q;
  rep(i, n) {
    summ += v[i];
    q.push(v[i]);
    if (q.size() > m) {
      summ -= q.front();
      q.pop();
    }
    if (q.size() == m) {
      maxx = max(maxx, summ);
    }
  }
  maxx += m;
  double ans = maxx;
  ans /= 2;
  printf("%.10f\n", ans);
}
