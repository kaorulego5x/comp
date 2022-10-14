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
    int N;
    cin >> N;
    ve<ve<ll>> d(N, ve<ll>(N));
    rep(i, N) rep(j, N) cin >> d[i][j];
    ve<ve<bool>> f(N, ve<bool>(N, true));

    rep(k, N) rep(i, N) rep(j, N){
        if(d[i][k] + d[k][j] < d[i][j]){
            cout << -1 << endl;
            return 0;
        }else if(d[i][k] + d[k][j] == d[i][j] && i != k && k != j){
            f[i][j] = false;
        }
    }
    ll ans = 0;
    rep(i, N) rep(j, N){
        if(f[i][j]) ans += d[i][j];
    }
    cout << ans / 2 << endl;
}