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
  int N, M;
  cin >> N >> M;
  ve<pair<int, int>> actions;
  rep(i, N) {
    rep(j, N) {
      if(i ^ 2 + j ^ 2 == M) {
        actions.push_back(MP(i, j));
        actions.push_back(MP(-i, j));
        actions.push_back(MP(i, -j));
        actions.push_back(MP(-i, -j));
      }
    }
  }
  
  ve<ve<int>> dist(N, ve<int>(N, -1));
  queue<pair<int, int>> que;
  que.push(MP(0, 0));
  while(!que.empty()) {
    pair<int, int> v = que.front();
    int cx = v.first;
    int cy = v.second;
    que.pop();
    
    fora(d, actions) {
      int nx = cx + d.first;
      int ny = cy + d.second;
      if(nx < 0 || nx >= N) continue;
      if(ny < 0 || ny >= N) continue;
      if(dist[nx][ny] != -1) continue;
      dist[nx][ny] = dist[cx][cy] + 1;
      que.push(MP(nx, ny));
    }
  };

  rep(i, N) {
    rep(j, N) {
      cout << dist[i][j] << " ";
    }
    cout << endl;
  }
}