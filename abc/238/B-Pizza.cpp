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
  int n;
  cin >> n;
  ve<int> a(n+1);
  a[0] = 0;
  reps(i, 1, n+1) {
    cin >> a[i];
  }
  reps(i, 1, n+1){
    a[i] += a[i-1];
    a[i] %= 360;
  }
  sort(all(a));
  int res = 0;
  reps(i, 1, n+1) {
    res = max(a[i] - a[i-1], res);
  }
  res = max(res, 360 - a[n]);
  cout << res << endl;
}