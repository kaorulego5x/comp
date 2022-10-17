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
  ll x,a,d,n;
  cin >> x >> a >> d >> n;
  
  if(d<0){
    a+=d*(n-1);
    d*=-1;
  }

  ll st=0, fi=n-1;
  while(fi-st>1){
    ll te=(st+fi)/2;
    if(a+d*te>=x){
      fi=te;
    } else {
      st=te;
    }
  }
  cout << a+d*st << endl;
}