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
const int MOD = 10007;

int main() {
  int N;
  cin >> N;

  ve<int> ans(N);
  ans[0] = 0;
  ans[1] = 0;
  ans[2] = 1;

  if(N <= 3) {
    cout << ans[N-1] << endl;
    return 0;
  }
  
  for(int i = 3; i < N; i--) {
    ans[i] = (ans[i-1] + ans[i-2] + ans[i-3]) % MOD;
  }

  cout << ans[N-1] << endl;
}