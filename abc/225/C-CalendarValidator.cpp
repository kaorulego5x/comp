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
  int n, m;
  cin >> n >> m;
  ve<ve<ll>> b(n, ve<ll>(m));
  rep(i, n) rep(j, m) cin >> b[i][j];
  int baseJ = (b[0][0] - 1) % 7 + 1;
  if(baseJ + m - 1 > 7) {
    cout << "No" << endl;
    return 0;
  }
  rep(i, n) {
    rep(j, m) {
      if(b[i][j] != b[0][0] + 7 * i + j) {
        cout << "No" << endl;
        return 0; 
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}