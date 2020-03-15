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
  string a;
  cin >> a;
  int sum = 0;
  rep(i, 3) {
    if (a[i] == '1') {
      sum++;
    }
  }
  cout << sum << endl;

  return 0;
}