#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = n-1; i >= 0; i--)
#define ford(i, a, b) for(ll i = a; i >= ll(b); i--)
#define fora(i, I) for(const auto& i:I)
#define all(x) x.begin(), x.end()
#define size(x) ll(x.size())
#define MOD 1000000007
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define ve vector

using type = pair<int, ll>;
using event = pair<ll, type>;

int main(){
    int N, Q;
    cin >> N >> Q;
    ve<event> v;
    rep(i, N){
        int s, t, x; cin >> s >> t >> x;
        v.PB({s-x, type(-1, x)});
        v.PB({t-x, type(0, x)});
    }
    rep(i, Q){
        int d; cin >> d;
        v.PB({d, type(1, i)});
    }
    sort(v.begin(), v.end());

    ve<ll> res(Q);
    multiset<ll> se;
    fora(p, v){
        ll x = p.F;
        int type = p.S.F;
        ll val = p.S.S;
        if (type == -1) se.insert(val);
        else if (type == 0) se.erase(se.lower_bound(val));
        else res[val] = (se.empty() ? -1: *(se.begin()));
    }
    fora(v, res) cout << v << endl;
}