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
  ll n, a, b, p, q, r, s;
  cin >> n >> a >> b >> p >> q >> r >> s;
  reps(i, p, q+1) {
    reps(j, r, s+1) {
      if(i-a == j-b) {
        ll dist = i-a;
        if(max(1-a, 1-b) <= dist and dist <= min(n-a, n-b)) cout << '#';
      } else if(i-a == -(j-b)) {
        ll dist = i-a;
        if(max(1-a, b-n) <= dist and dist <= min(n-a, b-1)) cout << '#';
      } else {
        cout << '.';
      }
    }
    cout << endl;
  }
}