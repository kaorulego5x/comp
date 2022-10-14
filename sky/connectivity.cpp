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

int main(){
    int N, K, L; cin >> N >> K >> L;
    UnionFind uf1(N), uf2(N);
    
    rep(i, K){
        int a, b; cin >> a >> b; a--; b--;
        uf1.merge(a, b);
    }

    rep(i, L){
        int a, b; cin >> a >> b; a--; b--;
        uf2.merge(a, b);
    }

    using pint = pair<int, int>;
    map<pint, int> ma;
    rep(v, N){
        pint p(uf1.root(v), uf2.root(v));
        ma[p]++;
    }

    rep(v, N){
        pint p(uf1.root(v), uf2.root(v));
        cout << ma[p] << " ";
    }
}