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
  int k;
  string a, b;
  cin >> k >> a >> b;
  ll ta, tb;
  rep(i, a.size()) {
    ta += (a[a.size()-i-1] - '0') * pow(k, i);
  }
  rep(i, b.size()) {
    tb += (b[b.size()-i-1] - '0') * pow(k, i);
  }
  cout << ta * tb << endl;
}