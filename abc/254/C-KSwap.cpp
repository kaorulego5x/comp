#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < ll(n); i++)
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
  int n, k;
  cin >> n >> k;
  ve<ve<ll>> s(k, ve<ll>(0));
  rep(i, n) {
    int a;
    cin >> a;
    s[i%k].push_back(a); 
  }
  rep(i, k) {
    sort(all(s[i]));
  }
  ve<ll> b;
  rep(i, n){
    b.push_back(s[i/k][i%k]);
  }
  bool flag = true;
  rep(i, n-1) {
    if(b[i] > b[i+1]) {
      flag = false;
      break;
    }
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}