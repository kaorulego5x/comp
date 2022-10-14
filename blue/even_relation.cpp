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

using Edge = pair<int, int>; //target, weight
using Graph = ve<ve<Edge>>;

int N;
Graph G;
ve<int> res;

void dfs(int v, int p, int c){
    res[v] = c;
    for(auto e: G[v]){
        if (e.Fi == p) continue;
        if(e.Se & 1) dfs(e.Fi, v, 1-c);
        else dfs(e.Fi, v, c);
    }
}

int main(){
    cin >> N;
    G.assign(N, ve<Edge>());
    res.resize(N);
    rep(i, N-1){
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        G[u].PB(make_pair(v, w));
        G[v].PB(make_pair(u, w));
    }
    dfs(0, -1, 1);
    for(auto v: res) cout << v << endl;
}