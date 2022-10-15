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
  int H1, W1, H2, W2;
  cin >> H1 >> W1;
  ve<ve<int>> A(H1, ve<int>(W1));
  rep(i, H1) {
    rep(j, W1) {
      cin >> A[i][j];
    }
  }
  
  cin >> H2 >> W2;
  ve<ve<int>> B(H2, ve<int>(W2));
  rep(i, H2) {
    rep(j, W2) {
      cin >> B[i][j];
    }
  }

  int delH = H1 - H2;
  int delW = W1 - W2;
  rep(i, pow(2, H1)) {
    rep(j, pow(2, W1)) {
      ve<int> vecH, vecW;
      rep(k, H1) if(i >> k & 1) vecH.push_back(k);
      rep(k, W1) if(j >> k & 1) vecW.push_back(k); 
      if(vecH.size() != H2 || vecW.size() != W2) continue;

      bool flag = true;
      rep(a, H2) {
        rep(b, W2) {
          if(A[vecH[a]][vecW[b]] != B[a][b]) {
            flag = false;
            break;
          }
          if(!flag) break;
        }
      }
      if(flag) cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}