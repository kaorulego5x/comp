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

struct Edge {
    int to;
    ll cost;
};

ve<ve<Edge>> G;

void dfs(int N, int v, ve<bool> &used, ve<ll> &dist, bool &good, ll cost){
    if(used[v]){
        if (dist[v]!=cost) good = false;
    }else{
        used[v] = true;
        dist[v] = cost;
        rep(i, G[v].size()) dfs(N, G[v][i].to, used, dist, good, cost+G[v][i].cost);
    }
}

int main(){
    int N, M;
    cin >> N >> M;
    G.resize(N, ve<Edge>());

    rep(i, M){
        int L, R, D;
        cin >> L >> R >> D;
        L--; R--;
        G[L].PB((Edge){R, D});
        G[R].PB((Edge){L, -D});
    }

    ve<bool> used(N, false);
    ve<ll> dist(N, -1);
    bool good = true;
    rep(i, N){
        if (!used[i]){
            dist[i] = 0;
            dfs(N, i, used, dist, good, 0LL);
        }
    }

    if (good) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}