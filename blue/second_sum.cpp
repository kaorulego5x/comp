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
    int N, P[100000], pos[100001];
    cin >> N;
    rep(i, N){
        cin >> P[i];
        pos[P[i]] = i;
    }
    multiset<int> st = {-1, -1, N, N};
    ll ans = 0;
    for(int i = N; i > 0; i--){
        st.insert(pos[i]);
        auto it = st.lower_bound(pos[i]);
        auto l1 = prev(it);
        auto l2 = prev(l1);
        auto r1 = next(it);
        auto r2 = next(r1);
        ll num = (*l1 - *l2) * (*r1 - pos[i]) + (pos[i] - *l1) * (*r2 - *r1);
        ans += i * num;
    }
    cout << ans << endl;
}