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
    ll N, M;
    cin >> N >> M;
    UnionFind uf(N);
    ll res = N * (N-1) / 2;
    ve<ll> res_list;
    ve<int> A(M), B(M);
    rep(i, M){
        cin >> A[i] >> B[i]; A[i]--; B[i]--;
    }
    rep(i, M){
        res_list.PB(res);
        ll a = A[M-1-i];
        ll b = B[M-1-i];
        if(uf.issame(a, b)) continue;
        res -= uf.size(a) * uf.size(b); 
        uf.merge(a, b);
    }
    reverse(all(res_list));
    rep(i, M) cout << res_list[i] << endl;
}