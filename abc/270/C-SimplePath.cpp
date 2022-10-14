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

ve<ve<int>> e(200010, ve<int>(0));
ve<bool> flag(200010, false);
deque<int> deq;
bool stop = false;

void dfs(int k, int to) {
  flag[k] = true;
  if(!stop) deq.push_back(k);
  if (k == to) stop = true;
  fora(node, e[k]) {
    dfs(node, to);
  }
  if(!stop) deq.pop_back();
  return;
}

int main() {
  int n, x, y;
  int u, v;

  cin >> n >> x >> y;
  rep(i, n-1) {
    cin >> u >> v;
    e[u].push_back(v);
    e[v].push_back(u);
  }

  dfs(x, y);
  while(!deq.empty()) {
    cout << deq.front();
    deq.pop_front();
    if(deq.empty()) cout << endl;
    else cout << " ";
  }

  return 0;
}