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
  int R, C;
  int sy, sx;
  int gy, gx;

  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};

  cin >> R >> C;
  cin >> sy >> sx;
  cin >> gy >> gx;
  --sy, --sx, --gy, --gx;

  ve<string> maze(R);
  rep(i, R) {
    cin >> maze[i];
  }

  ve<ve<int>> dist(R, ve<int>(C, -1));
  dist[sy][sx] = 0;

  queue<pair<int, int>> que;
  que.push(MP(sy, sx));

  while(!que.empty()) {
    pair<int, int> v = que.front();
    int cy = v.first;
    int cx = v.second;
    
    rep(i, 4) {
      int ny = cy + dy[i];
      int nx = cx + dx[i];
      
      if(dist[ny][nx] != -1) continue;
      if(maze[ny][nx] == '#') continue;

      dist[ny][nx] = dist[cy][cx] + 1;
      que.push(MP(ny, nx));
    }
  }

  cout << dist[gy][gx] << endl;
}