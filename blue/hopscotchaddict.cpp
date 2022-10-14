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

using Graph = ve<ve<int>>;
using pint = pair<int, int>;

int N, M;
Graph G;
int s,t;

ll solve(){
    ve<ve<ll>> dist(N, ve<ll>(3, -1));
    dist[s][0] = 0;
    queue<pint> que;
    que.push({s, 0});
    while(!que.empty()){
        pint cur = que.front(); que.pop();
        int v = cur.Fi;
        int parity = cur.Se;
        fora(nv, G[v]){
            int np = (parity + 1) % 3;
            if(dist[nv][np] == -1){
                dist[nv][np] = dist[v][parity] + 1;
                que.push({nv, np});
            }
        }
    }
    if(dist[t][0] == -1) return -1;
    else return dist[t][0] / 3;
}

int main(){
    cin >> N >> M;
    G.assign(N, ve<int>());
    rep(i, M){
        int u, v; cin >> u >> v; u--; v--;
        G[u].push_back(v);
    }
    cin >> s >> t;
    s--; t--;
    cout << solve() << endl;
}