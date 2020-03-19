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
  int a, b;
  cin >> a >> b;

  if (a >= 1 && a <= 9 && b >= 1 && b <= 9) {
    cout << a * b << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}