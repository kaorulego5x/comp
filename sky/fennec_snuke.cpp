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

int N;
ve<ve<int>> G;

void bfs(ve<int>& dist, int s){
    queue<int> que;
    dist[s] = 0;
    que.push(s);
    while(!que.empty()){
        int v = que.front(); que.pop();
        for(int nv: G[v]){
            if (dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
}

int main(){
    cin >> N;
    G.resize(N, ve<int>());
    rep(i, N-1){
        int a, b; a--; b--;
        cin >> a >> b;
        G[a].PB(b);
        G[b].PB(a);
    }
    ve<int> fennec(N, -1);
    ve<int> snuke(N, -1); 
    bfs(fennec, 0);
    bfs(snuke, N-1);

    int cnt = 0;
    rep(i, N){
        if (fennec[i] <= snuke[i]) cnt++;
    }
    if(cnt > N-cnt) cout << "Fennec" << endl;
    else cout << "Snuke" << endl; 
}