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

set<pair<int, int>> S1;
set<pair<int, int>> S2;

ll H, W, N;
ll A[10];

int main(){
    cin >> H >> W >> N;
    rep(i, N){
        int x, y;
        cin >> x >> y;
        S1.insert({x, y});
        rep(j, 3) rep(k, 3) S2.insert({x-j, y-k});
    }

    A[0] = (H-2) * (W-2);
    fora(r, S2){
        int x, y;
        x = r.Fi, y = r.Se;
        if (x <= 0 || x > H - 2) continue;
        if (y <= 0 || y > W - 2) continue;
        int ret = 0;
        rep(i, 3) rep(j, 3) ret += S1.count({x+i, y+j});

        A[ret]++;
        A[0]--;
    }
    rep(i, 10) cout << A[i] << endl;
}