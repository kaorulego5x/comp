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

template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return 1;} return 0;}

int main(){
    int N, M;
    cin >> N >> M;
    ve<ll> x(N), y(N), z(N);
    rep(i, N){
        cin >> x[i] >> y[i] >> z[i];
    }
    ll ans = 0;
    rep(a, 2) rep(b, 2) rep(c, 2){
        ve<ll> sumc(N);
        rep(i, N){
            sumc[i] = (2*a-1)*x[i] + (2*b-1)*y[i] + (2*c-1)*z[i];
        }
        sort(all(sumc), greater<>());
        ll sum = 0;
        rep(i, M){
            sum += sumc[i];
        }
        chmax(ans, sum);
    }
    cout << ans << endl;
}