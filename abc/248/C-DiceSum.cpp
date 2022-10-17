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
  int n, m, K;
  cin >> n >> m >> K;
  ve dp(n+1, ve(K+1, mint(0)));
  dp[0][0] = 1;

  reps(i, 1, n+1) {
    rep(j, K+1) {
      reps(k, 1, m+1) {
        if(j-k>=0) {
          dp[i][j] += dp[i-1][j-k];
        }
      }
    }
  }

  mint res = 0;
  reps(i, 1, K+1) {
    res += dp[n][i];
  }
  cout << res.val() << endl;
}