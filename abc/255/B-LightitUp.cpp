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
  int n, k;
  cin >> n >> k;
  ve<bool> hasLight(n, false);
  ve<pair<int, int>> cd(n);
  rep(i, k) {
    int a;
    cin >> a;
    a--;
    hasLight[a] = true;
  }
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    cd[i] = MP(x, y);
  }
  double R = 0;
  rep(i, n) {
    double minDist = DBL_MAX;
    if(hasLight[i]) continue;
    rep(j, n) {
      if(i == j) continue;
      if(!hasLight[j]) continue;
      double dist = sqrt((double)pow(cd[i].first-cd[j].first, 2) + (double)pow(cd[i].second-cd[j].second, 2));
      minDist = min(minDist, dist);
    }
    R = max(minDist, R);
  }
  printf("%.6f\n", R);
}