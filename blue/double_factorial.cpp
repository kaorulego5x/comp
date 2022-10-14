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

ll solve(ll N){
    if (N % 2 == 1) return 0;

    ll res = 0;
    N /= 2;
    while (N){
        res += N/5;
        N /= 5;
    }
    return res;
}

int main(){
    ll N; cin >> N;
    cout << solve(N) << endl;
}