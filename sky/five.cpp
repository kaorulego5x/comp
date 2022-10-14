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

ve<ll> Eratos(ll N){
    ve<bool> is_prime(N+1, true);
    ve<ll> P;
    for(int i = 2; i <= N; i++){
        if(is_prime[i]){
            for(int j = 2 * i; j<= N; j+=i){
                is_prime[j] = false;
            }
            P.PB(i);
        }
    }
    return P;
}

int main(){
    ll N;
    cin >> N;
    ve<ll> cand = Eratos(55555);
    int j = 0;
    ve<ll> res;
    if(i, N){
        while(cand[j]%5!=1){
            j++
        }
        res.PB(cand[j]);
    }
    rep(i, res.size()){
        cout << res[i] << " ";
    }
}