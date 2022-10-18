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
  int n;
  cin >> n;
  ve<ll> AS(n, 0);
  cin >> AS[0];
  reps(i, 1, n) {
    ll a;
    cin >> a;
    AS[i] = AS[i-1]+a;
  }
  ll x;
  cin >> x;
  ll repeat = x / AS[n-1];
  ll surplus = x % AS[n-1];
  int count = 0;
  rep(i, n) {
    if(surplus < AS[i]) {
      count = i + 1;
      break;
    }
  }
  cout << n * repeat + count << endl;
}