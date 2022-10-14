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
    int n, m;
    cin >> n >> m;
    ve<ve<int>> graph(12, ve<int>(12, 0));
    rep(i, m){
        int x, y;
        cin >> x >> y; x--; y--;
        graph[x][y] = graph[y][x] = 1;
    }
    
    int ans = 1;
    rep(mask, (1<<n)){
        ve<int> as;
        rep(i, n){
            if(mask & (1<<i)){
                as.push_back(i);
            }
        }

        bool ok = true;
        for(auto a: as){
            for(auto b: as){
                if(a == b) continue;
                if(graph[a][b] != 1){
                    ok = false;
                }
            }
        }
        if(ok){
            ans = max(ans, (int)as.size());
        }
    }
    cout << ans << endl;
}