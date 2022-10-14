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
  string X;
  cin >> X;
  bool flag = true;
  while(!X.empty()) {
    if(X[0] == 'o' || X[0] == 'k' || X[0] == 'u') {
      X.erase(0, 1);
      continue;
    } else if (X.size() >= 2) {
      if(X[0] == 'c' && X[1] == 'h') {
        X.erase(0, 2);
        continue;
      }
      flag = false;
      break;
    }
    flag = false;
    break;
  }
  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;
}