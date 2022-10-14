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

ll N, K;
ve<ll> A, F;

bool check(ll X){
    ll need = 0;
    rep(i, N){
        ll ok = X/F[i];
        if (ok < A[i]) need += A[i] - ok;
    }
    return (need <= K);
}

int main(){
    cin >> N >> K;
    A.assign(N, 0);
    F.assign(N, 0);    
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> F[i]; 
    sort(all(A));
    sort(all(F), greater<>());
    ll ok = 1e13, ng = -1;
    while(ok - ng > 1){
        ll mid = (ok + ng) / 2;
        (check(mid) ? ok : ng) = mid;
    }
    cout << ok << endl;
    return 0;
}