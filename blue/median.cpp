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
    cin >> N;
    ve<ll> A(N), B(N);
    rep(i, N) cin >> A[i] >> B[i];
    sort(all(A)); sort(all(B));
    if(N&1){
        cout << B[N/2] - A[N/2] + 1;
    }else{
        cout << ((B[N/2-1]+B[N/2]) - (A[N/2-1]+A[N/2]))+1;
    }
}