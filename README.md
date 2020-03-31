# AtCoder
## contests
* abc = AtCoder Beginner Contest
* agc = AtCoder Grand Contest
* arc = AtCoder Regular Contest


## Tips

* テンプレート

```cpp
 
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << ": " << x << '\n'

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

return 0;
}
```

* 入力例１
```cpp
int n,m;
cin >> n >> m;
```

* 入力例２
```cpp
int n;
vector<int> v(n);
rep(i, n) { cin >> v[i]; }
```

* 入力例3
```cpp
vector<int> v(m);
rep(i, m) { cin >> v[i]; }
```

* 出力例１
```cpp
cout << n << m << endl;
```

* 出力例２
```cpp
printf("%.10f\n", a);
```

* nCrの求め方
```cpp
int combination(int n, int r) {
  int num = 1;
  for (int i = 1; i <= r; i++) {
    num = num * (n - i + 1) / i;
  }
  return num;
}
```

* 配列の重複要素を削除する
```cpp
sort(all(v));
v.erase(unique(all(v)), v.end());
```

* 逆順にソート
```cpp
sort(all(v), greater<int>());
```

* 各桁の和
```cpp
int sumOfDigits(int n){
   if(n < 10)  return n;
   return sumOfDigits(n/10) + n%10;
}
```
