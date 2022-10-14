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
  int N;
  cin >> N;
  ve<int> C(N), cnt(N, 0);
  rep(i, N) {
    cin >> C[i];
  }

  rep(i, N) {
    rep(j, N) {
      if(i == j) continue;
      if(C[i] % C[j] == 0) {
        cnt[i]++;
      }
    }
  }

  double ans = 0.0;
  fora(i, cnt) {
    if(i%2 == 0) {
      ans += (double)(i + 2) / (2 * i + 2); 
    } else {
      ans += 0.5;
    }
  }

  printf("%.6f", ans);
}