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

ll d[303][303];
int cost[303][303];
int N, M, L, x, y, r;

int main(){
    cin >> N >> M >> L;
    rep(x, N) rep(y, N) d[x][y] = (x==y ? 0: 1LL<<60);
    rep(i, M){
        cin >> x >> y >> r;
        d[x-1][y-1] = d[y-1][x-1] = r;
    }

    rep(k, N) rep(i, N) rep(j, N) chmin(d[i][j], d[i][k] + d[k][j]);
    rep(i, N) rep(j, N) cost[i][j] = (i==j) ? 0 : (d[i][j] <= L ? 1: (1LL << 20));
    rep(k, N) rep(i, N) rep(j, N) chmin(cost[i][j], cost[i][k] + cost[k][j]);

    int Q;
    cin >> Q;
    while(Q--){
        cin >> x >> y;
        x--; y--;
        if(cost[x][y] >= 1000) cout << -1 << endl;
        else cout << cost[x][y] - 1 << endl;
    }
}