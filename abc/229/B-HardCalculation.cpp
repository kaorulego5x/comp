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
  ll xa, xb;
  cin >> xa >> xb;
  string a, b;
  a = to_string(xa);
  b = to_string(xb);
  int as = a.size();
  int bs = b.size();
  rep(i, min(as, bs)) {
    int ad = a[as-i-1] - '0';
    int bd = b[bs-i-1] - '0';
    if(ad+bd >= 10) {
      cout << "Hard" << endl;
      return 0;
    }
  }
  cout << "Easy" << endl;
  return 0;
}