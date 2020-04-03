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
  vector<char> v(n);
  rep(i, n) { cin >> v[i]; }

  auto result = find(all(v), 'Y');

  if (result == v.end()) {
    cout << "Three" << endl;
  } else {
    cout << "Four" << endl;
  }
  return 0;
}