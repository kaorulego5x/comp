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
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  ve<int> a(n+5);
  ve<int> b(n+5);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  ve<bool> passed(n+5, false);

  ve<int> c;
  rep(i, n) {
    c.push_back(10000 * (100 - a[i]) + i);
  }
  sort(all(c));
  rep(i, x) {
    passed[c[i]%10000] = true;
  }

  c.clear();
  rep(i, n) {
    if(!passed[i]) {
      c.push_back(10000*(100-b[i])+i);
    }
  }
  sort(all(c));
  rep(i, y) {
    passed[c[i]%10000] = true;
  }

  c.clear();
  rep(i, n) {
    if(!passed[i]) {
      c.push_back(10000*(200-b[i]-a[i])+i);
    }
  }
  sort(all(c));
  rep(i, z) {
    passed[c[i]%10000] = true;
  }
  rep(i, n) {
    if(passed[i]) cout << i+1 << endl;
  }
}