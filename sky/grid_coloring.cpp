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
    int H, W, N;
    cin >> H >> W >> N;
    ve<int> a(N);
    rep(i, N) cin >> a[i];
    ve<ve<int>> res(H, ve<int>(W, 0));
    int cu = 1;
    rep(y, H) rep(x, W){
        res[y][x] = cu;
        a[cu-1]--;
        if(!a[cu]) cu++;
    }

    rep(y, H) rep(x, W) cout << res[y][x];

    rep(y, H){
        rep(_x, W){
            int x;
            if (y % 2 == 0) x = _x;
            else x = W - 1 - _x;

            if(_x) cout << " ";
            cout << res[y][x];
        }
        cout << endl;
    }
}