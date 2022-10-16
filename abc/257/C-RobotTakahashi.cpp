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
  string s;
  ve<pair<ll, char>> a;
  cin >> n >> s;
  int ans = 0;
  rep(i, n) {
    ll w; 
    cin >> w;
    a.push_back(MP(w, s[i]));
    if(s[i] == '1') ans += 1;
  }
  sort(all(a));
  int x = ans;
  rep(i, n) {
    if(a[i].second == '0') x++;
    else x--;
    if(i < n - 1) {
      if(a[i].first != a[i + 1].first) {
        ans = max(ans, x);
      }
    } else {
      ans = max(ans, x);
    }
  }
  cout << ans << endl;
  return 0;
}