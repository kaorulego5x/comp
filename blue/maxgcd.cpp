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

ve<ll> divisor(ll n){
    ve<ll> ret;
    for(ll i = 1; i * i <= n; i++){
        if (n % i == 0){
            ret.PB(i);
            if (i * i != n) ret.PB(n / i);
        } 
    }
    sort(all(ret), greater<ll>());
    return ret;
}

int main(){
    int N, K;
    cin >> N >> K;
    ve<int> A(N);
    int sum = 0;
    rep(i, N){
        cin >> A[i];
        sum += A[i];
    }
    auto d = divisor(sum);

    ve<int> r(N);
    rep(i, d.size()){
        rep(j, N) r[j] = A[j]%d[i];
        sort(all(r));
        ve<int> L(N+1), R(N+1);
        L[0] = 0;
        R[N] = 0;
        rep(j, N) L[j+1] += r[j] + L[j]; //累積
        repd(j, N){
            R[j] += d[i] - r[j] + R[j+1];
        }
        rep(j, N+1){
            if(L[j] == R[j] && L[j] <= K){
                cout << d[i] << endl;
                return 0;
            }
        }
    }
    cout << N << endl;
    return 0;
}