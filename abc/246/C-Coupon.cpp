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
  ll n, k, x;
  cin >> n >> k >> x;
  ll count = 0;
  ll sum = 0;
  ve<ll> surplus(n);
  rep(i, n) {
    ll a;
    cin >> a;
    sum += a;
    count += a / x;
    surplus[i] = a % x;
  }
  sort(all(surplus), greater<ll>());
  if(count >= k) {
    cout << sum - (ll)(x*k) << endl;
    return 0;
  }
  ll ans = sum - (ll)(x*count);
  ll t = k - count;
  rep(i, n) {
    if(t <= 0) break;
    ans -= surplus[i];
    t--;
  }
  cout << ans << endl;
  return 0;
}