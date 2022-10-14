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
    int H, W, D;
    cin >> H >> W >> D;
    ve<ll> d(H*W+1, 0);
    ve<int> X(H*W+1, 0);
    ve<int> Y(H*W+1, 0);
    rep(i, H){
        rep(j, W){
            int a;
            cin >> a;
            X[a] = i + 1;
            Y[a] = j + 1;
        }
    }
    for(int i = D+1; i <= H*W; i++){
        d[i] = d[i-D] + abs(X[i]-X[i-D]) + abs(Y[i] - Y[i-D]);
    }

    int Q;
    cin >> Q;
    rep(i, Q){
        int L, R;
        cin >> L >> R;
        cout << d[R] - d[L] << endl;
    }
}