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

  int n;
  cin >> n;

  int sum = 0;
  vector<int> v(n), va(n);
  rep(i, n) {
    cin >> v[i];
    sum += v[i];
  }

  sort(all(v));

  int a = 0;
  rep(i, n) {
    if (v[i] % 10 != 0) {
      a = v[i];
      break;
    }
  }
  int b = ((sum - a) % 10 == 0 ? 0 : sum - a);
  int bb = (sum % 10 == 0 ? 0 : sum);

  cout << max(b, bb) << endl;

  return 0;
}