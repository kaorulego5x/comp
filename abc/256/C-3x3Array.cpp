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
  int h1, h2, h3, w1, w2, w3;
  cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
  h1 -= 3;
  h2 -= 3;
  h3 -= 3;
  w1 -= 3;
  w2 -= 3;
  w3 -= 3;
  if(h1+h2+h3 != w1+w2+w3) {
    cout << 0 << endl;
    return 0;
  }
  ll count = 0;
  rep(i1, h1+1) {
    rep(j1, h1-i1+1) {
      rep(i2, h2+1) {
        rep(j2, h2-i2+1) {
          rep(i3, h3+1) {
            rep(j3, h3-i3+1) {
              if(i1+i2+i3 == w1 && j1+j2+j3 == w2) {
                count += 1;
              }
            }
          }
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}