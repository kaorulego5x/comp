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

ve<ve<int>> G;

void dfs(int v, int p, ve<int> &dist, int depth){
    dist[v] = depth;
    for(auto to: G[v]){
        if(to == p) continue;
        dfs(to, v, dist, depth+1);
    }
}

int main(){
    int N, u, v;
    cin >> N >> u >> v;
    u--; v--;
    G.resize(N);
    rep(i, N-1){
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].PB(b);
        G[b].PB(a);
    }

    ve<int> l_dist(N), r_dist(N);
    dfs(u, -1, l_dist, 0);
    dfs(v, -1, r_dist, 0);

    int ans = 0;
    rep(i, N){
        if(l_dist[i] < r_dist[i]){
            chmax(ans, r_dist[i]-1);
        }
    }

    cout << ans << endl;
}