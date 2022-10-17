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
  int n, a, b;
  ve<ve<char>> m(a*n, ve<char>(b*n));
  rep(i, a*n) {
    rep(j, b*n) {
      int count = i/a + j/b;
      if(count % 2 == 0) m[i][j] = '.';
      else m[i][j] = '#';
    }
  }
  rep(i, a*n) {
    rep(j, b*n) {
      cout << m[i][j];
    }
    cout << endl;
  }
}