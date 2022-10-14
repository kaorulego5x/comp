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

int main(){
    int N, K;
    cin >> N >> K;
    ve<ll> A(N, 0);
    rep(i, N){
        cin >> A[i];
    }
    ve<ll> opt(N, 0);
    ve<ll> sum(N, 0);
    sum[0] = A[0];
    for(int i = 1; i < N; i++){
        sum[i] = sum[i-1] + A[i];
    }
    if(A[0] >= 0) opt[0] = A[0];
    else opt[0] = 0;
    for(int i = 1; i < N; i++){
        int a = A[i];
        if (a < 0) a = 0;
        opt[i] = opt[i-1] + a;
    }

    ll res = 0;
    for(int i = 0; i <= N - K; i++){
        ll dif1 = (i != 0) ? (opt[i+K-1]-opt[i-1]) : opt[i+K-1];
        ll dif2 = (i != 0) ? (sum[i+K-1]-sum[i-1]) : sum[i+K-1];
        ll plus = opt[N-1] - dif1 + dif2;
        ll normal = opt[N-1] - dif1;
        ll cur = max(plus, normal);
        chmax(res, cur);
    }
    
    cout << res << endl;
}