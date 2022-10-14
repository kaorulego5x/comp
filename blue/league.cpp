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

template <class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}

struct Edge{
    ll to;
};
using Graph = ve<ve<Edge>>;

int encode(int i, int j){
    if (i < j) swap(i, j);
    return i * (i - 1) / 2 + j + 1; 
}

int seen[2000000];
int d[2000000];     
int dfs(const Graph &G, int now) {
    if (seen[now] == 2) return d[now];
    seen[now] = 1;
    for (auto e : G[now]) {
        if (seen[e.to] == 1) {
            cout << -1 << endl;
            exit(0);
        }
        chmax(d[now], dfs(G, e.to) + 1);
    }
    seen[now] = 2;
    return d[now];
}

int main() {
    long long N;
    cin >> N;
    Graph G(N * (N - 1) / 2 + 1);
    rep(i, N){
        int now = 0;
        rep(t, N - 1) {
            int j;
            cin >> j;
            j--;
            int next = encode(i, j);
            G[now].push_back({next});
            now = next;
        }
    }
    cout << dfs(G, 0) << endl;
    return 0;
}