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
  map<ll, int> am;
  map<ll, int> bm;
  rep(i, n) {
    ll a;
    cin >> a;
    if(am.find(a) == am.end()) am[a] = 1;
    else am[a]++;
  }
  rep(i, m) {
    ll b;
    cin >> b;
    if(bm.find(b) == bm.end()) bm[b] = 1;
    else bm[b]++;
  }
  for(auto& [key, val]: bm) {
    if(am.find(key) == am.end()) {
      cout << "No" << endl;
      return 0;
    }
    else if(am[key] < val) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}