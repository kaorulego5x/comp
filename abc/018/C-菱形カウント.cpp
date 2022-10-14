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
  int R, C, K;
  cin >> R >> C >> K;
  ve<string> S(R);
  rep(i, R) {
    cin >> S[i];
  }
  int ans = 0;
  ve<ve<int>> minx(R, ve<int>(C, 0));
  for(int x = K - 1; x <= R - K; x++) {
    for(int y = 0; y < C; y++) {
      int up = K;
      rep(i, K) {
        if(S[x+i][y] == 'x') {up = i;}
      }
      int down = K;
      rep(i, K) {
        if(S[x-i][y] == 'x') {down = i;}
      }
      minx[x][y] = min(up, down);
    }
  }
  
  for(int x = K - 1; x <= R - K; x++) {
    for(int y = K - 1; y <= C - K; y++) {
      bool flag = true;
      for(int i = - K + 1; i <= K - 1; i++) {
        if(minx[x][y-i] < abs(K - i)) { flag = false; break;}
      }
      if(flag == true) {ans++;}
    }
  }
  cout << ans << endl;
}