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
  int n, m;
  cin >> n >> m;
  ve<ve<bool>> x(n+1, ve<bool>(n+1, false));
  ve<ve<bool>> y(n+1, ve<bool>(n+1, false));
  rep(i, m){
    int a, b;
    cin >> a >> b;
    x[a][b] = true;
    x[b][a] = true;
  }
  rep(i, m){
    int c, d;
    cin >> c >> d;
    y[c][d] = true;
    y[d][c] = true;
  }
  
  ve<int> p(n+1);
  reps(i, 1, n+1) {
    p[i] = i;
  }
  do{
    bool flag = true;
    reps(i, 1, n+1) {
      reps(j, 1, n+1) { 
        if(i == j) continue;
        if(i > j) continue;
        if(x[i][j] != y[p[i]][p[j]]) {
          flag = false;
          break;
        }
      }
    }
    if(flag) {
      cout << "Yes" << endl;
      return 0;
    }
  }while(next_permutation(all(p)));
  cout << "No" << endl;
  return 0;
}