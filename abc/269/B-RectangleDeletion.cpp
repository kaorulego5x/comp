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
  ve<string> S(10);
  int a, b, c, d = -1;
  rep(i, 10) {
    cin >> S[i];
    rep(j, 10) {
      if(a != -1) break;
      if(S[i][j] == '#') {
        a = i;
        c = j;
      }
    }
  }
  for(int i = c; i < 10; i++) {
    if(S[a][i] == '.') {
      d = i;
      break;
    } else if(i == 9) {
      d = 9;
    }
  }
  for(int i = a; i < 10; i++) {
    if(S[i][c] == '.') {
      b = i;
      break;
    } else if(i == 9) {
      b = 9;
    }
  }

  cout << a + 1 << " " << b + 1 << endl;
  cout << c + 1 << " " << d + 1 << endl;
}