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

ll N;
string S;
int P;

int main(){
    cin >> N >> P >> S;
    if (P == 2 || P == 5){
        ll res = 0;
        rep(i, N) (if(S[N-i-1]-'0') % P == 0) res += N - i;
        return res;
    }
    ve<ll> val(P, 0);
    ll tenfactor = 1;
    ll cur = 0;
    val[cur]++;
    rep(i, N){
        cur = (cur + (S[N-i-1]-'0') * tenfactor) % P;
        tenfactor = (tenfactor * 10) % P;
        val[cur]++;
    }
    ll res = 0;
    rep(p, P) res += val[p] * (val[p] - 1) /2;
    cout << res;
}