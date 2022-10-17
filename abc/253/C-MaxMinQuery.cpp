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
  int q;
  set<ll> s;
  map<ll, ll> m;
  rep(i, q) {
    int t;
    cin >> t;
    if(t == 1) {
      ll x;
      cin >> x;
      if(m.find(x) == m.end()) {
        m[x] = 1;
      } else {
        m[x] += 1;
      }
      s.insert(x);
    } else if(t == 2) {
      ll x;
      cin >> x;
      int c;
      cin >> c;
      m[x] = max(0, m[x]-c);
      if(m[x] == 0) {
        s.erase(x);
      }
    } else {
      cout << *s.rbegin() - *s.begin() << endl;
    }
  } 
}