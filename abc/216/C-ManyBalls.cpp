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
  ll n;
  cin >> n;
  int count = 0;
  string res = "";
  while(count < 120) {
    if (n == 0) {
      reverse(all(res));
      cout << res << endl;
      return 0;
    }
    if(n %= 2 == 0) {
      n /= 2;
      res += "B";
    } else {
      n -= 1;
      res += "A";
    }
    count -= 1;
  }
  return 0;
}