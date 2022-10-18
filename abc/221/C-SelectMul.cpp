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
  string n;
  cin >> n;
  int nn = n.size();
  ll res = 0;
  rep(i, pow(2, nn)) {
    int count = 0;
    rep(j, nn) {
      if(i >> j & 1) count++;
    }
    if(count == 0 or count == nn) continue;
    ve<char> lv, rv;
    rep(j, nn) {
      if(i >> j & 1) lv.push_back(n[j]);
      else rv.push_back(n[j]);
    }
    do{
      do {
        string l, r;
        if(lv[0] == '0' or rv[0] == '0') continue;
        rep(j, lv.size()) l.push_back(lv[j]);
        rep(j, rv.size()) r.push_back(rv[j]);
        res = max(res, (ll)stoi(l) * (ll)stoi(r));
      } while(next_permutation(all(lv)));
    } while(next_permutation(all(rv)));
  }
  cout << res << endl;
}