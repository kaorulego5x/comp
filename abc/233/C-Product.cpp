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

int n;
ll x;
ve<ve<ll>> g(100000, ve<ll>(0));
ll res = 0;

void dfs(ll pos, ll p) {
  if(pos == n) {
    if(p == x) res += 1;
    return;
  }
  for(auto& c: g[pos]) {
    if(p>x/c)continue;
    dfs(pos+1, c * p);
  }
}

int main() {
  cin >> n >> x;
  rep(i, n) {
    int l;
    cin >> l;
    rep(j, l) {
      ll a;
      cin >> a;
      g[i].push_back(a);
    }
  }
  dfs(0, 1);
  cout << res << endl;
  return 0;
}