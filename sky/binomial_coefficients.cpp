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
 
int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int ans1=a[n-1];
    int ans2=0;
    auto iter=lower_bound(a.begin(),a.end(),ans1/2);
    int index=iter-a.begin();
    if(abs(a[index-1]-ans1/2)<abs(a[index]-ans1/2)){
        if(a[index-1]==ans1) ans2=a[index];
        else ans2=a[index-1];
    }
    else{
        if(a[index]==ans1) ans2=a[index-1];
        else ans2=a[index];
    }
    cout<<ans1<<' '<<ans2<<endl;
}