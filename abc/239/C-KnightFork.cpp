#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define reps(i, s, n) for(ll i = s; i < ll(n); i++)
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
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
  int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};
  map<pair<int, int>, bool> m;
  rep(i, 8) {
    pair<int, int> p = MP(x1+dx[i], y1+dy[i]);
    m[p] = true;
  }
  rep(i, 8) {
    pair<int, int> p = MP(x2+dx[i], y2+dy[i]);
    if(m.find(p) != m.end()) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}