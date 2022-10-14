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

string N;
ll dp[1000005][2];
int main(){
    cin >>  N;
    dp[0][1] = 1;
    rep(i, N.size()){
        int now = (N[i] - '0');
        dp[i+1][0] = min(dp[i][0] + now, dp[i][1] + (10 - now));
        dp[i+1][1] = min(dp[i][0] + now + 1, dp[i][1] + (10 - now - 1));
    }

    cout << dp[N.size()][0] << endl;

    return 0;
}