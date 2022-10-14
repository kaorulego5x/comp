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

template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return 1;} return 0;}

const ve<int> dx = {1, 0};
const ve<int> dy = {0, 1};
const ll INF = 1LL << 60;
int H, W;
ve<string> fi;

int main(){
    cin >> H >> W;
    fi.resize(H);
    rep(i, H) cin >> fi[i];
    ve<ve<ll>> dp(H, ve<ll>(W, INF));
    if(fi[0][0] == '#') dp[0][0] = 1;
    else dp[0][0] = 0;

    rep(i, H){
        rep(j, W){
            rep(dir, 2){
                int ni = i + dx[dir], nj = j + dy[dir];
                if (ni >= H || nj >= W) continue;
                int add = 0;
                if (fi[ni][nj] == '#' && fi[i][j] == '.') add = 1;
                chmin(dp[ni][nj], dp[i][j] + add);
            }
        }
    } 
    cout << dp[H-1][W-1] << endl;
}