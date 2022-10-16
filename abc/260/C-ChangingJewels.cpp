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
  ll n,x,y;
  cin >> n >> x >> y;
  ll r[12], b[12];
  if(n==1){
    cout << 0 << endl;
    return 0;
  }
  if(n==2){
    cout << x*y << endl;
    return 0;
  }
  r[2]=x*y;
  b[2]=y;
  for(int i=3; i<=n; i++){
    b[i]=r[i-1]+y*b[i-1];
    r[i]=r[i-1]+x*b[i];
  }
  cout << r[n] << endl;
}