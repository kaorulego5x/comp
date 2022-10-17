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
  int n;
  cin >> n;
  ve<string> g(n);
  rep(i, n) {
    cin >> g[i];
  }
  // tate
  rep(i, n-5) {
    rep(j, n) {
      int count = 0;
      rep(k, 6) {
        if(g[i+k][j] == '#') count += 1;
      }
      if(count >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  // yoko
  rep(i, n) {
    rep(j, n-5) {
      int count = 0;
      rep(k, 6) {
        if(g[i][j+k] == '#') count += 1;
      }
      if(count >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  // naname
  rep(i, n-5) {
    rep(j, n-5) {
      int count = 0;
      rep(k, 6) {
        if(g[i+k][j+k] == '#') count += 1;
      }
      if(count >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  rep(i, n-5) {
    reps(j, 5, n) {
      int count = 0;
      rep(k, 6) {
        if(g[i+k][j-k] == '#') count += 1;
      }
      if(count >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    } 
  }
  cout << "No" << endl;
  return 0;
}