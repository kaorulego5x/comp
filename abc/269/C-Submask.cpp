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
  ll N;
  cin >> N;
  ve<int> one;
  rep(i, 61) {
    if(N >> i & 1) {
      one.push_back(i);
    }
  }
  rep(i, pow(2, one.size())) {
    ll res = 0;
    rep(j, one.size()) {
      if(i >> j & 1) {
        res += (ll)pow(2, (ll)one[j]);
      }
    }
    cout << res << endl;
  }
}