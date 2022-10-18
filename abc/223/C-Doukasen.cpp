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
  ve<double> a(n);
  ve<double> b(n);
  double t = 0;
  rep(i, n) {
    cin >> a[i] >> b[i];
    t += a[i]/b[i]/2; 
  }
  double left = t;
  double ans = 0;
  rep(i, n) {
    double tt = min(left, a[i]/b[i]);
    ans += tt * b[i];
    left -= tt;
  }
  printf("%.12f\n", ans);
}