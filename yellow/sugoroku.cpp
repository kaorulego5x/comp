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

template<typename T>
struct Segtree{
    int n;
    T e;
    vector<T> dat;
    typedef function<T(T a, T b)> Func;
    Func f;

    Segtree(){}
    Segtree(int n_input, Func f_input, T e_input){
        initialize(n_input, f_input, e_input);
    }
    void initialize(int n_input, Func f_input, T e_input){
        f = f_input;
        e = e_input;
        n = 1;
        while(n < n_input) n <<= 1;
        dat.resize(2*n-1, e);
    }

    void update(int k, T a){
        k += n - 1;
        dat[k] = a;
        while(k > 0){
            k = (k - 1)/2;
            dat[k] = f(dat[2*k+1], dat[2*k+2]);
        }
    }

    T get(int k){
        return dat[k+n-1];
    }

    T between(int a, int b){
        return query(a, b+1, 0, 0, n);
    }

    T query(int a, int b, int k, int l, int r){
        if(r<=a || b<=l) return e;
        if(a<=l && r<=b) return dat[k];
        T vl = query(a, b, 2*k+1, l, (l+r)/2);
        T vr = query(a, b, 2*k+2, (l+r)/2, r);
        return f(vl, vr);
    }
};

void fail(){
    cout << -1 << endl;
    exit(0);
}

int main(){
    int N, M;
    string S;
    cin >> N >> M >> S;
    reverse(all(S));
    Segtree<int> st(N+M+1, [](int a, int b){return max(a, b);}, 0);
    for(int i=0; i <= N; i++) if(S[i] == '0') st.update(i, i);

    ve<int> pos = {0};
    int p = 0;
    while(p < N){
        int p2 = st.between(p, p+M);
        if(p2 == p) fail();
        p = p2;
        pos.push_back(p);
    } 

    reverse(pos.begin(), pos.end());
    int sz = pos.size();
    for(int i=0; i<sz-1; i++) cout << pos[i] - pos[i+1] << endl;
    return 0;

    return 0;
}