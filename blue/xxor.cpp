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
    int N;
    ll K;
    cin >> N >> K;
    ve<ll> A(N);
    rep(i, N) cin >> A[i];

    ll res = 0;
    for(int d = 60; d>=-1; d--){
        if(d!=-1 && !(K & (1LL << d))) continue;
        //以下d桁目が1
        ll tmp = 0;
        for(int e = 60; e >= 0; e--){
            ll mask = 1LL << e;
            int num = 0;
            rep(i, N) if(A[i] & mask) num++;
            if(e > d){
                if (K & mask) tmp += mask * (N - num);
                else tmp += mask * num;
            }else if(e == d){
                tmp += mask * num;
            }else{
                tmp += mask * max(num, N-num);
            }
        }
        res = max(tmp, res);
    }
    cout << res << endl;
}