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
    ve<ll> A(N);
    rep(i, N) cin >> A[i];
    sort(all(A));
    ll sum = 0;
    int maxk = 0;
    rep(i, N-1){
        sum += 2 * A[i];
        if (sum < A[i+1]) maxk = i+1;
    }
    cout << N - maxk << endl;
}