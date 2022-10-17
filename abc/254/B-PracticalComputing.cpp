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
  int n;
  cin >> n;
  ve<ve<ll>> c(n+1, ve<int>(n+1, 0));
  for(int i = 1; i <= n; i++){
    c[i][1] = 1;
    c[i][i] = 1;
  }
  for(int i = 3; i <= n; i++) {
    for(int j = 2; j <= i - 1; j++) {
      c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
    }
  }
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++) {
      cout << c[i][j];
      if(i != j) cout << " ";
    }
    cout << endl;
  }
}