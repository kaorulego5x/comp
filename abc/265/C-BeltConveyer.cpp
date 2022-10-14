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

int H, W;
ve<ve<char>> G(505, ve<char>(505));
ve<ve<bool>> flag(505, ve<bool>(505, false));

void explore(pair<int, int> c) {
  if(flag[c.first][c.second] == true) {
    cout << -1 << endl;
    exit(0);
  }
  flag[c.first][c.second] = true;
  pair<int, int> n;
  switch(G[c.first][c.second]){
    case 'U':
      n = MP(c.first - 1, c.second);
      break;
    case 'D':
      n = MP(c.first + 1, c.second);
      break;
    case 'L':
      n = MP(c.first, c.second - 1);
      break;
    case 'R':
      n = MP(c.first, c.second + 1);
      break;
  }
  if(n.first < 0 || n.first >= H || n.second < 0 || n.second >= W) {
    cout << c.first + 1 << " " << c.second + 1 << endl;
    exit(0);
  }
  explore(n);
}

int main() {
  cin >> H >> W;
  rep(i, H) {
    rep(j, W) {
      cin >> G[i][j];
    }
  }
  explore(MP(0, 0));
}