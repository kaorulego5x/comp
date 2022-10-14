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
const ll INF = 1LL << 60;

template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return 1;} return 0;}

template<class T> int former(const vector<T> &v, T x) {
    return upper_bound(v.begin(), v.end(), x) - v.begin() - 1;
}

template<class T> int latter(const vector<T> &v, T x) {
    return lower_bound(v.begin(), v.end(), x) - v.begin();
}

int main(){
    int A, B, Q;
    cin >> A >> B >> Q;
    ve<ll> s(A+2); 
    ve<ll> t(B+2);
    s[A] = -INF; 
    s[A+1] = INF;
    t[B] = -INF; 
    t[B+1] = INF;
    rep(i, A) cin >> s[i];
    rep(i, B) cin >> t[i];
    sort(all(s)); 
    sort(all(t));

    rep(_, Q){ 
        ll x; cin >> x;
        ll res = INF;
        rep(i, 2) {
            ll first = (i ? s[former(s, x)] : s[latter(s, x)]);
            for (int j = 0; j < 2; ++j) {
                ll second = (j ? t[former(t, first)] : t[latter(t, first)]);
                chmin(res, abs(x - first) + abs(first - second));
            }
        }
        rep(i, 2) {
            ll first = (i ? t[former(t, x)] : t[latter(t, x)]);
            for (int j = 0; j < 2; ++j) {
                ll second = (j ? s[former(s, first)] : s[latter(s, first)]);
                chmin(res, abs(x - first) + abs(first - second));
            }
        }
        cout << res << endl;
    }
}