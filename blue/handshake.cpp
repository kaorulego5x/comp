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

int N, M;
ve<int> a;

bool chk(ll x){
    ll cnt = 0;
    rep(i, N){
        ll pos = lower_bound(all(a), x-a[i]) - a.begin();
        cnt += (N-pos);
    }
    return cnt < M;
}

int main(){
    cin >> N >> M;
    a.resize(N);
    rep(i, N) cin >> a[i];
    sort(all(a));

    ll ng = 0, ok = M;
    while(abs(ok-ng) > 1){
        ll mid = (ok + ng) / 2;
        if (chk(mid)) ok = mid;
        else ng = mid; 
    }

    ve<ll> wa(n+1);
    rep(i, N) wa[i+1] = wa[i] + a[i];
    rep(i, N){
        ll pos = upper_bound(all(a), ng-a[i]) - a.begin();
    }  
}