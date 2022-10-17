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
  int n, x;
  cin >> n >> x;
  ve<int> a(n+1);
  reps(i, 1, n+1) {
    int fr;
    cin >> fr;
    a[i] = fr;
  }
  ve<bool> flag(n+1, false);
  flag[x] = true;
  int res = 1;
  while(true) {
    if(!flag[a[x]]) {
      res += 1;
      x = a[x];
      flag[x] = true;
    } else {
      break;
    }
  }
  cout << res << endl;
}