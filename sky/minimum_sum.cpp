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

typedef pair<int, int> pii;

int main(){
    int N;
    cin >> N;
    ve<int> a(N), pos(N);
    rep(i, N) cin >> a[i];
    rep(i, N) pos[a[i]] = i;

    multiset<int> st = {-1, N};
    ll ans = 0;
    for(int i = 1; i <= N; i++){
        st.insert(pos[i]);
        auto it = st.lower_bound(pos[i]);
        auto l = prev(it);
        auto r = next(it);
        ans += (long)(pos[i] - *l) * (*r - pos[i]) * i;
    }
    cout << ans << endl;
}