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
  set<int> s;
  int n, w;
  cin >> n >> w;
  ve<int> a(n);
  rep(i, n) {
    cin >> a[i];
    if(a[i] <= w) {
      s.insert(a[i]);
    }
  }
  rep(i, n - 1) {
    for(int j = i + 1; j < n; j++) {
      if(a[i] + a[j] <= w) {
        s.insert(a[i] + a[j]);
      }
    }
  }
  rep(i, n - 2) {
    for(int j = i + 1; j < n - 1; j++) {
      for(int k = j + 1; k < n; k++) {
        if(a[i] + a[j] + a[k] <= w) {
          s.insert(a[i] + a[j] + a[k]);
        }
      }
    }
  }
  cout << s.size() << endl;
}