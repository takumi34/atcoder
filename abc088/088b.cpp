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
  int n;
  cin >> n;
  vector<int> v(n);
  int sum = 0;
  rep(i, n) {
    cin >> v[i];
    sum += v[i];
  }

  sort(all(v), greater<int>());

  int alice = 0;
  for (int i = 0; i < n; i += 2) {
    alice += v[i];
  }
  cout << alice - (sum - alice) << endl;

  return 0;
}