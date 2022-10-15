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
  ve<ve<bool>> G(15, ve<bool>(15, false));
  rep(i, 4) {
    for(int j = - (2 * i + 1); j <= 2 * i + 1; j++) {
      for(int k = - (2 * i + 1); k <= 2 * i + 1; k++) {
        if(j != -(2 * i + 1) && j != 2 * i + 1 && k != -(2 * i + 1) && k != 2 * i + 1) continue; 
        G[7 + j][7 + k] = true;
      }
    }
  }
  int R, C;
  cin >> R >> C;
  R--; C--;
  if(G[R][C] == true) cout << "black" << endl;
  else cout << "white" << endl;
}