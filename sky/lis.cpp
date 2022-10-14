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

int N;

int main(){
    cin >> N;
    ve<int> A(N);
    rep(i, N) cin >> A[i];
    ve<int> dp(N);

    int res = 0;
    rep(i, N){
        dp[i] = 1;
        for(int j = 0; j < i; i++){
            if(A[j] < A[i]) chmax(dp[i], dp[j]+1);
        }
        res = max(res, dp[i]);
    }
    cout << res << endl;
    return 0;
}

// TLE

