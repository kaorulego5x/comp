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
  ll X, K;
  cin >> X >> K;
  rep(i, K) {
    ll s = X / pow(10, i + 1);
    if(abs(s * pow(10, i + 1) - X) >= abs((s + 1) * pow(10, i + 1) - X)) {
      X = (s + 1) * pow(10, i + 1);
    } else {
      X = s * pow(10, i + 1);
    }
  }
  cout << X << endl;
}