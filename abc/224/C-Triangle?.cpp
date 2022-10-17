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
  ve<ll> x(n);
  ve<ll> y(n);
  rep(i, n) {
    cin >> x[i] >> y[i];
  }
  ll count = 0;
  rep(i, n) {
    reps(j, i+1, n) {
      reps(k, j+1, n) {
        if((x[i]-x[j])*(y[i]-y[k]) != (x[i]-x[k])*(y[i]-y[j])) count += 1;
      }
    }
  }
  cout << count << endl;
}