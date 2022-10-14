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
  int N, S;
  cin >> N >> S;
  ve<int> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];
  ve<ve<int>> dp(101, ve<int>(10001));
  for(int i = 1; i <= N; i++) {
    rep(j, 10001) {
      if(j >= A[i]) dp[i][j] |= dp[i][j - A[i]];
      if(j >= B[i]) dp[i][j] |= dp[i][j - B[i]];
    }
  }
  if(dp[N][S]) {
    cout << "Yes" << endl;
		ve<int> v;
		for(int i=N;i>=1;i--)
		{
			if(S - A[i] >= 0 && dp[i - 1][S - A[i]]) v.push_back(0), S -= A[i];
			else v.push_back(1), S -= B[i];
		}
		for(int i = v.size() - 1; i >= 0; i--) {
      if(v[i]==0) printf("H");
		  else printf("T");
    }
  } else {
    cout << "No" << endl;
  }
}