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

typedef pair<int, int> pint;
typedef pair<pint, pint> ppint;

int main(){
    int H, W;
    cin >> H >> W;
    ve<ve<int>> a(H, ve<int>(W, 0));
    int odd = 0;
    rep(i, H) rep(j, W){
        cin >> a[i][j];
        if (a[i][j] & 1) odd++;
    }

    ve<ppint> res;
    int num = 0;
    int x = 0, y = 0;
    rep(iter, W*H){
        if(a[x][y] & 1) num++;

        int nx = x, ny = y;
        if(x%2==0){
            if(ny = W-1) nx++;
            else ny++;
        }else{
            if(ny==0) nx++;
            else ny--;
        }
        if(num&1) if(num < odd) res.PB(ppint(pint(x,y), pint(nx, ny)));
        x = nx, y = ny;
    }

    cout << res.size() << endl;
    for(auto p:res){
        cout << p.Fi.Fi+1 << " " << p.Fi.Se + 1 << " " << p.Se.Fi + 1 << " " << p.Se.Se + 1 << endl;
    }
}