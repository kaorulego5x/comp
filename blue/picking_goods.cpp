#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

long long v[3100][3100], dp[3100][3100][5];
int main() {
  int R, C, K;
  cin >> R >> C >> K;
  memset(v, 0, sizeof(v));
  for (int i = 0; i < K; ++i) {
    long long r, c, t;
    cin >> r >> c >> t;
    v[r][c] = t;
  }
  memset(dp, 0, sizeof(dp));
  for (int i = 0; i <= R; ++i) {
    for (int j = 0; j <= C; ++j) {
      for (int k = 0; k <= 3; ++k) {
        // 上へ行く
        if (i-1 >= 0) {
            chmax(dp[i][j][0], dp[i-1][j][k]);
            chmax(dp[i][j][1], dp[i-1][j][k] + v[i][j]);
        }
 
        // 右へ行く
        if (j-1 >= 0) {
            chmax(dp[i][j][k], dp[i][j-1][k]);
            if (k-1 >= 0)
                chmax(dp[i][j][k], dp[i][j-1][k-1] + v[i][j]);
        }
      }
    }
  }
  long long res = 0;
  for (int k = 0; k <= 3; ++k) chmax(res, dp[R][C][k]);
  cout << res << endl;
}