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

using pll = pair<ll, ll>;
using Edge = pair<int, pll>;
using Graph = ve<ve<Edge>>;
const ll INF = 1LL << 60;
const int MAX = 2500;

int N, M;
ll S;
Graph G;
ve<ll> C, D;

void solve() {
  if (S >= MAX) S = MAX;
  vector<vector<long long>> dp(N, vector<long long>(MAX+1, INF));
  priority_queue<pair<long long, pll>, vector<pair<long long, pll> >, greater<pair<long long, pll> > > que;
  dp[0][S] = 0;
  que.push(make_pair(0, pll(0, S)));
  while (!que.empty()) {
    auto p = que.top(); que.pop();
    long long time = p.first;
    int v = p.second.first;
    long long s = p.second.second;
    if (time > dp[v][s]) continue;

    // 補充
    if (s + C[v] <= MAX) {
      long long ns = s + C[v];
      long long ntime = time + D[v];
      if (chmin(dp[v][ns], ntime)) {
        que.push(make_pair(ntime, pll(v, ns)));
      }
    }
    // 辺を通る
    for (auto e : G[v]) {
      if (s < e.second.first) continue;
      int nv = e.first;
      long long ns = s - e.second.first;
      long long ntime = time + e.second.second;
      if (chmin(dp[nv][ns], ntime)) {
        que.push(make_pair(ntime, pll(nv, ns)));
      }
    }
  }
  for (int v = 1; v < N; ++v) {
    long long res = INF;
    for (int s = 0; s <= MAX; ++s) chmin(res, dp[v][s]);
    cout << res << endl;
  }
}

int main() {
  cin >> N >> M >> S;
  G.assign(N, vector<Edge>());
  for (int i = 0; i < M; ++i) {
    long long u, v, a, b;
    cin >> u >> v >> a >> b;
    --u, --v;
    G[u].push_back(Edge(v, pll(a, b)));
    G[v].push_back(Edge(u, pll(a, b)));
  }
  C.resize(N); D.resize(N);
  for (int i = 0; i < N; ++i) cin >> C[i] >> D[i];
  solve();
}
