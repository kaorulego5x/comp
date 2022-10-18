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
  string x;
  cin >> x;
  map<char, char> dict;
  map<char, char> rdict;
  rep(i, 26) {
    dict[x[i]] = char('a'+i);
    rdict[char('a'+i)] = x[i];
  }
  int n;
  cin >> n;
  ve<string> s(n);
  rep(i, n) {
    cin >> s[i];
    rep(j, s[i].size()) {
      s[i][j] = dict[s[i][j]];
    }
  }
  sort(all(s));
  rep(i, n) {
    rep(j, s[i].size()) {
      cout << rdict[s[i][j]];
    }
    cout << endl;
  }
}