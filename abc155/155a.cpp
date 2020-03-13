#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;

int main() {
    int n = 3;
    vector<int> v(n);
    rep(i, n) { cin >> v[i]; }
    sort(all(v));

    if (v[0] == v[1] && v[1] != v[2])
    {
        cout << "Yes" << endl;
  } else if (v[1] == v[2] && v[0] != v[1]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}