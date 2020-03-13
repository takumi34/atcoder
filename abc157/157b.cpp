#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;

int vecfind(std::vector<int> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance(vec.begin(), itr);
  if (index != vec.size()) {
    return 1;
  } else {
    return 0;
  }
}
int main() {
  int n = 3;
  vector<int> a(n), b(n), c(n);
  rep(i, n) { cin >> a[i]; }
  rep(i, n) { cin >> b[i]; }
  rep(i, n) { cin >> c[i]; }

  int m;
  cin >> m;
  vector<int> v(m);
  rep(i, m) { cin >> v[i]; }

  sort(all(v));
  if ((vecfind(v, a[0]) && vecfind(v, a[1]) && vecfind(v, a[2])) ||
      (vecfind(v, b[0]) && vecfind(v, b[1]) && vecfind(v, b[2])) ||
      (vecfind(v, c[0]) && (vecfind(v, c[1]) && vecfind(v, c[2])) ||
       (vecfind(v, a[0]) && vecfind(v, b[0]) && vecfind(v, c[0])) ||
       (vecfind(v, a[1]) && vecfind(v, b[1]) && vecfind(v, c[1])) ||
       (vecfind(v, a[2]) && vecfind(v, b[2]) && vecfind(v, c[2])) ||
       (vecfind(v, a[0]) && vecfind(v, b[1]) && vecfind(v, c[2])) ||
       (vecfind(v, a[2]) && vecfind(v, b[1]) && vecfind(v, c[0])))) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}