#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define reps(i, s, n) for(ll i = s; i < ll(n); i++)
#define repd(i, n) for(ll i = n-1; i >= 0; i--)
#define ford(i, a, b) for(ll i = a; i >= ll(b); i--)
#define fora(i, I) for(const auto& i:I)
#define all(x) x.begin(), x.end()
#define PB push_back
#define Fi first
#define Se second
#define MP make_pair
#define ve vector
const int MOD = 1000000007;

int main() {
  ve<int> x(3);
  ve<int> y(3);
  rep(i, 3) {
    int a, b;
    cin >> a >> b;
    x[i] = a;
    y[i] = b;
  }
  bool flag = false;
  rep(i, 3) {
    rep(j, 3) {
      if(i == j) continue;
      if(x[i] == x[j]) flag = true;
    }
    if(!flag) cout << x[i] << " ";
  }
  flag = false;
  rep(i, 3) {
    rep(j, 3) {
      if(i == j) continue;
      if(y[i] == y[j]) flag = true; 
    }
    if(!flag) cout << y[i] << endl;
  }
}