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
  int n, k;
  cin >> n >> k;
  ve<ve<bool>> a(n, ve<bool>(26, false));
  rep(i, n) {
    string s;
    cin >> s;
    rep(j, s.size()) {
      a[i][s[j] - 'a'] = true;
    }
  }
  int ans = 0;
  rep(i, pow(2, n)) {
    int count = 0;
    rep(j, n) {
      if(i >> j & 1) count += 1;
    }
    if(count < k) continue;
    int count = 0;
    ve<int> c(26, 0);
    rep(j, n) {
      if(i >> j & 1) {
        rep(k, 26) {
          if(a[j][k]) c[k] += 1;
        }
      }
    }
    rep(j, 26) {
      if(c[j] == k) count += 1;
    }
    ans = max(ans, count);
  }
  cout << ans << endl;
}