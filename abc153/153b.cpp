#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;

int main() {

  int n, m;
  cin >> n >> m;

  vector<int> v(m);
  rep(i, m) { cin >> v[i]; }
  int sum = 0;
  rep(i, m) { sum += v[i]; }
  if (n <= sum) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}