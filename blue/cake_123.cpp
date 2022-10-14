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
    int X, Y, Z, K; 
    cin >> X >> Y >> Z >> K;
    ve<ll> A(X), B(Y), C(Z);
    rep(i, X) cin >> A[i];
    rep(i, Y) cin >> B[i];
    rep(i, Z) cin >> C[i];

    ve<ll> AB;
    rep(i, X) rep(j, Y) AB.PB(A[i] + B[j]); 
    sort(all(AB), greater<ll>());
    AB.resize(K);
    
    ve<ll> ABC;
    rep(i, AB.size()) rep(j, Z) ABC.PB(AB[i] + C[j]);
    sort(all(ABC), greater<ll>());

    rep(i, K) cout << ABC[i] << endl;
}