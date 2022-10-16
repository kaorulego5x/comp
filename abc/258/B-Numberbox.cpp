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
  ve<ve<ll>> a(n, ve<ll>(n));
  rep(i, n) {
    rep(j, n) {
      char c;
      cin >> c;
      a[i][j] = c - '0';
    }
  }
  int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
  int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

  ll ans = 0;
  rep(i, n) {
    rep(j, n){
      rep(k, 8) {
        ll now = 0;
        int cx = i;
        int cy = j;
        rep(l, n) {
          now *= 10;
          now += a[cx][cy];
          cx += dx[k];
          cy += dy[k];
          cx = (cx + n) % n;
          cy = (cy + n) % n;
        }
        ans = max(ans, now);
      }
    }
  }
  cout << ans << endl;
}