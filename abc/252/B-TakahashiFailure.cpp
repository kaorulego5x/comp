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
  int n, k;
  cin >> n >> k;
  ve<int> a(n);
  rep(i, n) {
    cin >> a[i];
    a[i] *= 1000;
    a[i] += i;
  }
  sort(all(a), greater<int>());
  ve<int> d;
  rep(i, a.size() - 1) {
    d.push_back(a[i] % 1000 + 1);
    if(a[i] != a[i+1]) {
      break;
    }
  }
  rep(i, k) {
    int b;
    cin >> b;
    rep(j, d.size()) {
      if(b == d[j]) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}