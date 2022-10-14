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
const ll INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return 1;} return 0;}

int main(){
    int n, ma, mb;
    cin >> n >> ma >> mb;

    ve<int> a(40), b(40), c(40);
    rep(i, n){
        cin >> a[i] >> b[i] >> c[i];
    }
    ve<ve<ve<ll>>> dp(41, ve<ve<ll>>(401, ve<ll>(401, INF)));
    
    dp[0][0][0] = 0;

    rep(i, N){
        rep(ca, 401){
            rep(cb, 401){
                if(dp[i][ca][cb] == INF) continue;
                chmin(dp[i+1][ca][cb], dp[i][ca][cb]);
                chmin(dp[i+1][ca+a[i]][cb+b[i]], dp[i][ca][cb] + c[i]);
            }
        }
    }

    ll ans = INF;
    for(int ca = 1; ca <= 400; ca++){
        for(int cb = 1; cb <= 400; cb++){
            if(ca*mb == cb * ma){
                chmin(ans, dp[n][ca][cb]);
            }
        }
    }

    if (ans == INF) ans = -1;
    cout << ans << endl;
    return 0;
}