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

ve<ll> divisor(ll n){
    ve<ll> ret;
    for(ll i = 1; i * i <= n; i++){
        if (n % i == 0){
            ret.PB(i);
            if (i * i != n) ret.PB(n / i);
        } 
    }
    sort(all(ret), greater<ll>());
    return ret;
}

int main(){
    ll N;
    cin >> N;
    ve<ll> res = divisor(N);
    rep(i, res.size()){
        cout << res[i] << endl;
    }
}