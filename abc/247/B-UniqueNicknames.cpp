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
  ve name(n, ve<string>(2));
  rep(i, n) {
    cin >> name[i][0] >> name[i][1];
  }
  rep(i, n) {
    bool flag = true;
    rep(j, 2) {
      bool cFlag = true;
      rep(k, n) {
        if(i == k) continue;
        rep(l, 2) {
          if(name[i][j] == name[k][l]) {
            cFlag = false;
          }
        }
      }
      flag |= cFlag;
    }
    if(!flag) {
      cout << "No" << endl;
      return 0;
    } 
  }
  cout << "Yes" << endl;
  return 0;
}