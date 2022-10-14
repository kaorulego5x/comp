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
    __int128_t X1, X2;
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll v = 0;
    while (true) {
        X1 = (__int128) x * (__int128) a;
        X2 = (__int128) x * (__int128) (a - 1);
        if (X1 <= y - 1 && X2 <= b) {
            v++;
            x = x * a;
        } else {
            break;
        }
    }
    ll t = (y - 1 - x) / b;
    v += t;
    cout << v << "\n";
    return 0;
}