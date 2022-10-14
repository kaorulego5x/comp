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

using pint = pair<int, int>;
int main(){
    int N, K;
    cin >> N >> K;
    int ma = (N-1) * (N-2) / 2;
    if (ma < K) cout << -1 << endl;
    else{
        ve<pint> res;
        for(int i=1; i <= N-1; i++) res.PB({i, N});
        int rem =  ma - K;
        int ci = 1, cj = 2;
        for(int _ = 0; _ < rem; ++_){
            res.PB({ci, cj});

            cj++;
            if(cj == N){
                ci++;
                cj = ci + 1;
            }
        }
        cout << res.size() << endl;
        fora(p, res) cout << p.Fi << " " << p.Se << endl;
    }
}