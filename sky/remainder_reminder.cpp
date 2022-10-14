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

int main() {
    ll N, K;
    cin >> N >> K;
    if (K == 0) {
        cout << N * N << "\n";
        return 0; 
    }
    ll ans = 0;
    for (int b = K + 1; b <= N; b++) {
        int n = (N + 1) / b;
        ans += n * (b - K) + max(0ll, N - ( n * b + K) + 1);
    }
    cout << ans << "\n";
    return 0;
}