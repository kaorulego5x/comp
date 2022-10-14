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

const int max_k = 160 * 80;
bool dp[81][81][max_k+1];

int main(){
    int h, w;
    cin >> h >> w;

    int a[h][w];
    int b[h][w];
    rep(i, h) rep(j, w) cin >> a[i][j];
    rep(i, h) rep(j, w) cin >> b[i][j];

    rep(i, 81) rep(j, 81) rep(k, max_k+1) dp[i][j][k] = false;
    dp[0][1][0] = true;
    dp[1][0][0] = true;
    
    rep(i, h) rep(j, w) rep(k, max_k+1){
        int d = abs(a[i][j] - b[i][j]);

        if (k + d <= max_k) dp[i+1][j+1][k+d] |= dp[i+1][j][k];
        if (abs(k-d) <= max_k) dp[i+1][j+1][abs(k-d)] |= dp[i+1][j][k];
        if(k + d <= max_k) dp[i+1][j+1][k + d] |= dp[i][j+1][k];
		if(abs(k - d) <= max_k) dp[i+1][j+1][abs(k - d)] |= dp[i][j+1][k];
    }

    rep(k, max_k + 1){
        if(dp[h][w][k]){
            cout << k << endl;
            return 0;
        }
    }
}