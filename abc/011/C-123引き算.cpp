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
const int INF = 1000000;

int main() {
  int N;
  cin >> N;
  int NG1, NG2, NG3;
  cin >> NG1 >> NG2 >> NG3;

  ve<int> dp(305, INF);
  dp[N] = 0;

  for(int i = N; i > 0; i--) {
    if(i == NG1 || i == NG2 || i == NG3) continue;
    for(int j = 1; j < 4; j++) {
      if(i - j < 0) continue;
      dp[i - j] = min(dp[i] + 1, dp[i - j]);
    }
  }

  if(dp[0] <= 100) cout << "YES" << endl;
  else cout << "NO" << endl;
}