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
  int n, x;
  cin >> n >> x;
  ve dp(n+1, ve(10005, false));
  dp[0][0] = true;
  reps(i, 1, n+1) {
    int a, b;
    cin >> a >> b;
    rep(j, 10005) {
      if(j-a>=0) dp[i][j] = dp[i][j] or dp[i-1][j-a];
      if(j-b>=0) dp[i][j] = dp[i][j] or dp[i-1][j-b];
    }
  }
  if(dp[n][x]) cout << "Yes" << endl;
  else cout << "No" << endl;
}