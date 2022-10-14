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
    int X, Y, A, B, C;
    cin >> X >> Y >> A >> B >> C;
    ve<ll> p(A), q(B), r(C);
    rep(i, A) cin >> p[i];
    rep(i, B) cin >> q[i];
    rep(i, C) cin >> r[i];
    sort(all(p), greater<>());
    sort(all(q), greater<>());
    rep(i, X) r.PB(p[i]);
    rep(i, Y) r.PB(q[i]);
    sort(all(r), greater<>());
    ll sum = 0;
    rep(i, X+Y) sum += r[i];
    cout << sum << endl;
}