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
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) { cin >> v[i]; }
  int count = 1;
  rep(i, n) {
    if (v[i] == count) {
      count++;
    }
  }
  if(count == 1){
    cout << -1 << endl;
    return 0;
  }
  
  cout << n - count + 1 << endl;

  return 0;
}