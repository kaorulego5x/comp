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
  int h, w, r, c;
  cin >> h >> w >> r >> c;
  int ans = 0;
  if(h == 1) ans += 0;
  else if (h == 2) ans += 1;
  else if(r == 1 or r == h) ans += 1;
  else ans += 2;
  if(w == 1) ans += 0;
  else if(w == 2) ans += 1;
  else if(c == 1 or c == w) ans += 1;
  else ans += 2;
  cout << ans << endl;
}