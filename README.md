# AtCoder
## contests
* abc = AtCoder Beginner Contest
* agc = AtCoder Grand Contest
* arc = AtCoder Regular Contest


## Tips

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

* 最大公約数(gcd)、最小公倍数(lcm)
```cpp
ll gcd(ll x, ll y) {
  if (y == 0) return x;
  return gcd(y, x % y);
}
ll lcm(ll a, ll b) {
  return a / gcd(a, b) * b;
}
```

* 組み合わせ(nCr)
```cpp
int combination(int n, int r) {
  int num = 1;
  for (int i = 1; i <= r; i++) {
    num = num * (n - i + 1) / i;
  }
  return num;
}
```

* 全て置き換え(boost)
```cpp
#include <boost/algorithm/string/replace.hpp>

 string a = "aiuelaia";
 boost::algorithm::replace_all(a, "a", "u");
```

* 配列の重複要素を削除する
```cpp
sort(all(v));
v.erase(unique(all(v)), v.end());
```

* 降順にソート
```cpp
sort(all(v), greater<int>());
```
* 反転させる
```cpp
string s = to_string(i);
string r = string(s.rbegin(), s.rend());
```

* 各桁の和
```cpp
int sumOfDigits(int n){
   if(n < 10)  return n;
   return sumOfDigits(n/10) + n%10;
}
```

* 素数判定
```cpp
bool isPrime(ll n) {
   if (n == 1)return false;
   for (int i = 2; i * i <= n; i++) {
      if (n % i == 0)return false;
   }
   return true;
}
```

* 約数列挙
```cpp
vector<ll> divisor(ll n) {
  vector<ll> divs;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      divs.push_back(i);
      if (i != n / i) divs.push_back(n / i);
    }
  }
  //sort(all(divs));
  return divs;
}
```
