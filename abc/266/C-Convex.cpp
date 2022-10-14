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
  ve<pair<int, int>> P(4);
  for(auto &[x, y]: P) {cin >> x >> y;}
  P.push_back(P[0]);
  P.push_back(P[1]);
  
  auto check = [](int x1, int y1, int x2, int y2) -> bool {
    return x1 * y2 - y1 * x2 > 0;
  };


  reps(i, 1, 5) {
    auto [x1, y1] = P[i - 1];
    auto [x2, y2] = P[i];
    auto [x3, y3] = P[i + 1];
    if(!check(x3 - x2, y3 - y2, x1 - x2, y1 - y2)) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}