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

const ll INF = 1LL << 60;

int N, M;

ll dp[1100][5000];

int main(){
    cin >> N >> M;
    ve<ll> a(M), b(M), c(M,0);
    rep(i, M){
        cin >> a[i] >> b[i];
        rep(j, b[i]){
            int t; cin >> t; --t;
            c[i] += (1<<t);
        }
    }

    rep(i, 1100) rep(j, 5000) dp[i][j] = INF;
    dp[0][0] = 0;

    rep(i, M){
        rep(j, (1 << N)){
            chmin(dp[i+1][j], dp[i][j]);

            int nj = j | c[i];
            chmin(dp[i+1][nj], dp[i][j] + a[i]);
        }
    }

    cout << (dp[M][(1<<N)-1] < INF ? dp[M][(1<<N)-1] : -1 ) << endl;
}