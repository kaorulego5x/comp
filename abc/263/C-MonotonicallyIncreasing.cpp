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
  int n,m;
  cin>>n>>m;
  vector<int> a;
  for(int i=0;i<n;i++) a.push_back(0);
  for(int i=0;i<m-n;i++) a.push_back(1);
  do{
    for(int i=0;i<m;i++){
      if(a[i]==0) cout<<i+1<<" ";
    }
    cout<<endl;
  }while(next_permutation(a.begin(),a.end()));
}