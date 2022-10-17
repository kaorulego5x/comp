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
  // maxL, minR
  map<ll, pair<ll, ll>> m;
  ve<ll> x(n);
  ve<ll> y(n);
  rep(i, n) {
    cin >> x[i] >> y[i];
  }
  string s;
  cin >> s;
  rep(i, n) {
    if(m.find(y[i]) == m.end()) {
      pair<ll, ll> p = MP(LLONG_MIN, LLONG_MAX);
      if(s[i] == 'R') p.second = x[i];
      else p.first = x[i];
      m[y[i]] = p;
    } else {
      if(s[i] == 'R') m[y[i]].second = min(m[y[i]].second, x[i]);
      else m[y[i]].first = max(m[y[i]].first, x[i]);
    }
  }
  for(auto& [key, val]: m) {
    cout << val.first << val.second << endl;
    if(val.first == LLONG_MIN) continue;
    else if(val.second == LLONG_MAX) continue; 
    else if(val.first - val.second > 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}