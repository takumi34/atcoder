#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;
typedef pair<int, int> P;

ll lucas(ll n, vector<ll> &memo) {
  if (n == 0) {
    return 2;
  } else if (n == 1) {
    return 1;
  }
  if (memo[n] != -1) {
    return memo[n];
  }
  return memo[n] = lucas(n - 1, memo) + lucas(n - 2, memo);
}

int main() {
  ll n;
  cin >> n;
  vector<ll> memo(n + 1, -1);
  rep(i, n + 1) {
    if (i == n) {
      cout << lucas(i, memo) << endl;
    }
    lucas(i, memo);
  }

  return 0;
}