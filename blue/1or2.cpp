#include <bits/stdc++.h>
using namespace std;

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

int main() {
    int N, M; cin >> N >> M;
    vector<int> X(M), Y(M), Z(M);
    for (int i = 0; i < M; ++i) cin >> X[i] >> Y[i] >> Z[i], --X[i], --Y[i];
    UnionFind uf(N);
    for (int i = 0; i < M; ++i) uf.merge(X[i], Y[i]);
    set<int> se;
    for (int i = 0; i < N; ++i) se.insert(uf.root(i));
    cout <<  (int)se.size();
}