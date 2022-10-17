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
  ll n, k;
  cin >> n >> k;
  ve<ve<ll>> c(n, ve<ll>(2));
  rep(i, n) cin >> c[i][0];
  rep(i, n) cin >> c[i][1];
  ve<ve<bool>> flag(n, ve<bool>(2, false));
  flag[0][0] = true;
  flag[0][1] = true;
  reps(i, 1, n) {
    rep(j, 2) flag[i][j] = (flag[i-1][0] and abs(c[i-1][0]-c[i][j]) <= k) or (flag[i-1][1] and abs(c[i-1][1] - c[i][j]) <= k);
  }
  if(flag[n-1][0] or flag[n-1][1]) cout << "Yes" << endl;
  else cout << "No" << endl;
}