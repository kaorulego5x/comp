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

int s[510][510];
int main(){
    int n,m,q;cin>>n>>m>>q;
    int l,r;
    for (int i=0; i<m; ++i){
        cin>>l>>r;
        ++s[l][r];
    }
    for (int i=1; i<=n; ++i)for (int j=1; j<=n; ++j)
        s[i][j]+=s[i-1][j]+s[i][j-1]-s[i-1][j-1];
    for (int i=0; i<q; ++i){
        cin>>l>>r;
        cout<<s[r][r]-s[r][l-1]-s[l-1][r]+s[l-1][l-1]<<endl;
    }
}