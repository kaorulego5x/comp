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
  int n;
  cin >> n;
  ve<string> s(n);
  rep(i, n) {
    cin >> s[i];
  }
  int ans = INT_MAX;
  rep(i, 10) {
    int count = 0;
    ve<int> t(10, 0);
    rep(j, n) {
      rep(k, 10) {
        if(s[j][k] == to_string(i)) t[k] += 1;
      }
    }
    int maxl = 0;
    int maxnum = 0;
    rep(j, 10) {
      if(t[j] >= maxnum) {
        maxl = j;
        maxnum = t[j];
      }
    }
    ans = min(ans, (maxnum - 1) * 10 + maxl);
  }
  cout << ans << endl;
}