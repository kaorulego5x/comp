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
  int X, Y, Z;
  cin >> X >> Y >> Z;
  if(X * Y < 0) {
    cout << abs(X) << endl;
  } else if(abs(X) < abs(Y)) {
    cout << abs(X) << endl;
  } else if(Y*Z > 0) {
    if(abs(Z) > abs(Y)) {
      cout << -1 << endl;
    } else {
      cout << abs(X) << endl;
    }
  } else {
    cout << abs(Z) * 2 + abs(X) << endl;
  }
}