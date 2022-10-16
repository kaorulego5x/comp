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
  ll H, W, N, Q, rs, cs;
  cin >> H >> W >> rs >> cs;
  rs--, cs--;
  cin >> N;
  ve<ve<ll>> wallH(W, ve<ll>(0));
  ve<ve<ll>> wallW(H, ve<ll>(0));
  rep(i, N) {
    int r, c;
    cin >> r >> c;
    r--, c--;
    wallH[c].push_back(r);
    wallW[r].push_back(c);
  }
  rep(i, W) {
    sort(all(wallH[i]));
  }
  rep(i, H) {
    sort(all(wallW[i]));
  }
  cin >> Q;
  ll ch = rs;
  ll cw = cs;
  rep(i, Q) {
    char d;
    ll l;
    cin >> d >> l;
    ll block = 0;
    if(d == 'U') {
      block = 0;
      if(wallH[cw].size() > 0) {
        ve<ll>::iterator position = lower_bound(all(wallH[cw]), ch);
        ll idx = position - wallH[cw].begin();
        if(idx >= 1) {
          block = wallH[cw][idx - 1] + 1;
        }
      }
      ch = max(max(ch - l, (ll)0), block);
    } else if(d == 'D') {
      block = H - 1;
      if(wallH[cw].size() > 0) {
        ve<ll>::iterator position = lower_bound(all(wallH[cw]), ch);
        ll idx = position - wallH[cw].begin();
        if(position - wallH[cw].end() != 0) {
          block = wallH[cw][idx] - 1;
        }
      }
      ch = min(min(ch + l, H - 1), block);
    } else if(d == 'L') {
      block = 0;
      if(wallW[ch].size() > 0) {
        ve<ll>::iterator position = lower_bound(all(wallW[ch]), cw);
        ll idx = position - wallW[ch].begin();
        if(idx >= 1) {
          block = wallW[ch][idx - 1] + 1;
        }
      }
      cw = max(max(cw - l, (ll)0), block);
    } else {
      block = W - 1;
      if(wallW[ch].size() > 0) {
        ve<ll>::iterator position = lower_bound(all(wallW[ch]), cw);
        ll idx = position - wallW[ch].begin();
        if(position - wallW[ch].end() != 0) {
          block = wallW[ch][idx] - 1;
        }
      }
      cw = min(min(cw + l, W - 1), block);
    }
    cout << ch + 1 << " " << cw + 1 << endl;
  }
}