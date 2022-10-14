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

struct UnionFind {
  vector<int> par;
  
  UnionFind(int n) : par(n, -1) { }
  void init(int n) { par.assign(n, -1); }
  
  int root(int x) {
    if (par[x] < 0) return x;
    else return par[x] = root(par[x]);
  }
  
  bool issame(int x, int y) {
    return root(x) == root(y);
  }
  
  bool merge(int x, int y) {
    x = root(x); y = root(y);
    if (x == y) return false;
    if (par[x] > par[y]) swap(x, y); // merge technique
    par[x] += par[y];
    par[y] = x;
    return true;
  }
  
  int size(int x) {
    return -par[root(x)];
  }
};

int mem[2010][2010]={0};
int dx6[6]={-1,-1,0,0,1,1};
int dy6[6]={-1,0,-1,1,0,1};

int main() {
  int n; 
  cin >> n;
  UnionFind uf(n + 1);
  ve<int> x(n + 1), y(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> x[i] >> y[i];
    x[i] += 1005; y[i] += 1005;
    mem[x[i]][y[i]] = i;
  }

  for(int i = 1;i <= n;i++){
    for(int k = 0; k < 6; k++){
      int nx = x[i] + dx6[k];
      int ny = y[i] + dy6[k];
      if(mem[nx][ny] > 0){
        uf.merge(i, mem[nx][ny]);
      }
    }
  }

  int res = 0;
  for(int i = 1; i <= n; i++) {
    if(uf.root(i) == i) { res++; }
  }
  cout << res << endl;
  return 0;
}

