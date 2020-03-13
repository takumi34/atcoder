#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;

int main() {
  int n;
  cin >> n;
  vector<string> v(n);
  rep(i, n) { cin >> v[i]; }

  std::map<std::string, int> dic;
  int max = 0;
  rep(i, n) {
    dic[v[i]] += 1;
    if (max < dic[v[i]]) {
      max = dic[v[i]];
    }
  }
  for (auto a : dic) {
    if (a.second != max) {
      continue;
    }
    cout << a.first << endl;
  }
}
