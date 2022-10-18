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
  ve<string> s(n);
  ve<string> t(n);
  rep(i, n) {
    cin >> s[i] >> t[i];
  }
  rep(i, n) {
    reps(j, i+1, n) {
      if(s[i] == s[j] and t[i] == t[j]) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}