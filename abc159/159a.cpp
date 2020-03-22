#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

int cal(int n) {
  int num = 1;
  for (int i = 1; i <= 2; i++) {
    num = num * (n - i + 1) / i;
  }
  return num;
}
int main() {
  int a, b;
  cin >> a >> b;

  int c = 0;
  if (a >= 2 && b >= 2) {
    c = cal(a) + cal(b);
  } else if (a >= 2 && b < 2) {
    c = cal(a);
  } else if (a < 2 && b >= 2) {
    c = cal(b);
  }
  cout << c << endl;

  return 0;
}