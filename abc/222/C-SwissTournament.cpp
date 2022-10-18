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

int janken(char l, char r) {
  if(l == r) return 0;
  else if((l == 'G' and r == 'C') or (l == 'C' and r == 'P') or (l == 'P' and r == 'G')) return 1;
  else return -1;
}

int main() {
  int n, m;
  cin >> n >> m;
  ve<string> a(2*n);
  rep(i, 2*n) cin >> a[i];
  
  ve<pair<int, int>> win(2*n);

  rep(j, m) {
    rep(i, n) {
      int l = win[2*i].second;
      int r = win[2*i+1].second;
      int res = janken(a[l][j], a[r][j]);
      if(res == 1) win[2*i].first -= 1;
      else if(res == -1) win[2*i+1].first -= 1;
    }
    sort(all(win));
  }
  rep(i, 2*n) {
    cout << win[i].second+1 << endl;
  }
}