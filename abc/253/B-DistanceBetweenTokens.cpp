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
  ve<pair<ll, ll>> a;
  int h, w;
  cin >> h >> w;
  rep(i, h) {
    string s;
    cin >> s;
    rep(j, w) {
      if(s[j] == 'o') {
        a.push_back(MP(i, j));
      }
    }
  }
  cout << abs(a[0].first - a[1].first) + abs(a[0].second - a[1].second) << endl;
}