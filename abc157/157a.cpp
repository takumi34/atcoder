#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;

int main() {
  int n;
  cin >> n;

  if(n % 2 == 0){
      cout << n / 2 << endl;
  }else{
      cout << n / 2 + 1 << endl;
  }
}