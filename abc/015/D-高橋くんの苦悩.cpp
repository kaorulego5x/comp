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
  int W, N, K;
  cin >> W >> N >> K;
  ve<int> A(N);
  ve<int> B(N);
  rep(i, N) {
    cin >> A[i] >> B[i];
  }

  ve<ve<ve<int>>> dp(N+1, ve<ve<int>>(W + 1, ve<int>(K + 1)));
  rep(i, N + 1) {
    rep(j, W + 1) {
      rep(k, K + 1) {
        if(i == 0) {
          dp[i][j][k] = 0;
        } else {
          if(j - A[i - 1] < 0 || k - 1 < 0) {
            dp[i][j][k] = dp[i - 1][j][k];
          } else {
            dp[i][j][k] = max(dp[i - 1][j][k], dp[i - 1][j - A[i - 1]][k - 1] + B[i - 1]);
          }
        }
      }
    }
  }
  cout << dp[N][W][K] << endl;
}