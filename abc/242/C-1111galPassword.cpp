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
  int n;
  cin >> n;
  ve dp(n+1, ve(10, mint(0)));
  reps(i, 1, 10) {
    dp[1][i] = 1;
  }
  reps(i, 2, n+1) {
    reps(j, 1, 10) {
      if(j-1>=1) dp[i][j] += dp[i-1][j-1];
      if(j+1<=9) dp[i][j] += dp[i-1][j+1];
      dp[i][j] += dp[i-1][j];
    }
  }
  mint ans = 0;
  reps(i, 1, 10) {
    ans += dp[n][i];
  }
  cout << ans.val() << endl;
}