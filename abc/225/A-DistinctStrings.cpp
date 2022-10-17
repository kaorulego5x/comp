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
  if(s[0] == s[1] and s[1] == s[2]) {
    cout << 1 << endl;
    return 0;
  } else if(s[0] == s[1] or s[1] == s[2] or s[0] == s[2]) {
    cout << 3 << endl;
    return 0;
  } else cout << 6 << endl;
  return 0;
}