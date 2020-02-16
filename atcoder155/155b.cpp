#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) { cin >> v[i]; }

  vector<int> e(n);
  int m = 0;
  int k = 0;
  rep(i, n)
  {
      if (v[i] % 2 == 0)
      {
          m++;
          if (v[i] % 3 == 0 || v[i] % 5 == 0)
          {
              k++;
          }
      }
  }
  if (m == k) {
    cout << "APPROVED" << endl;
  } else {
    cout << "DENIED" << endl;
  }
}