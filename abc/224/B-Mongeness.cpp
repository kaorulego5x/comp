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
  int h, w;
  cin >> h >> w;
  ve<ve<ll>> a(h, ve<ll>(w));
  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i1, h-1) {
    reps(i2, i1+1, h) {
      rep(j1, w-1) {
        reps(j2, j1+1, w) {
          if(a[i1][j1] + a[i2][j2] > a[i2][j1] + a[i1][j2]) {
            cout << "No" << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}