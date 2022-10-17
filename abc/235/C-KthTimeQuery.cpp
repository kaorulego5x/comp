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
  ll n, q;
  cin >> n >> q;
  map<ll, ve<ll>> m;
  rep(i, n) {
    ll a;
    cin >> a;
    if(m.find(a) == m.end()) {
      m[a] = {i+1};
    }
    else m[a].push_back(i+1);
  }
  rep(i, q) {
    ll x, k;
    cin >> x >> k;
    if(m.find(x) == m.end()) {
      cout << -1 << endl;
      continue;
    }
    if(m[x].size() < k) {
      cout << -1 << endl;
      continue;
    }
    cout << m[x][k-1] << endl;
  }
}