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
  ll a, b;
  cin >> a >> b;

  if (a == 1 || b == 1) {
    cout << 1 << endl;
    return 0;
  }

  if ((a * b % 2) == 0) {
    cout << (a * b) / 2 << endl;
    return 0;
  } else {
    cout << (a * b + 1) / 2 << endl;
  }

  return 0;
}