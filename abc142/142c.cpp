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
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) { cin >> v[i]; }
  vector<int> a(n);

  rep(i, n) {
    a[v[i] - 1] = i + 1;
  }

  rep(i, n) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}