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
  string s;
  cin >> s;
  if(s.size() == 1) {
    cout << "Yes" << endl;
    return 0;
  }
  if(s[0] == 'x' and s[1] == 'o') s.erase(0, 1);
  else if(s[0] == 'x' and s[1] == 'x') s.erase(0, 2);
  string ref = "oxx";
  rep(i, s.size()) {
    if(s[i] != ref[i%3]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}