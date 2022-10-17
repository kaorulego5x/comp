#include <bits/stdc++.h>
#include <atcoder/modint>
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
using mint = atcoder::modint998244353;

int main() {
  ll n;
  cin >> n;
  mint res = 0;
  rep(i, 18) {
    ll low = pow(10, i);
    ll high = pow(10, i+1);
    mint limit = min(n - low, high-low-1);
    res += limit * (limit+1) / 2;
    if(n <= high - 1) {
      break;
    }
  }
  cout << res.val() << endl;
}