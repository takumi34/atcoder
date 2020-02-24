#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;

int main() {

  ll n, m;
  cin >> n >> m;

  vector<ll> v(n);
  rep(i, n) { cin >> v[i]; }

  if (n <= m) {
    cout << "0" << endl;
    return 0;
  }
  sort(all(v));

  ll sum = 0;
  rep(i,n-m){
      sum += v[i];
  }
  cout << sum << endl;
}