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

int N, T;

int dp1[3010][3010];
int dp2[3010][3010];
ve<int> A, B;

int main(){
    cin >> N >> T;
    rep(i, N){
        int a, b;
        cin >> a >> b;
        A.PB(a), B.PB(b);
    }

    dp1[0][0] = 0;
    for(int i = 1; i <= N; i++){
        rep(j, T){
            dp1[i][j] = dp1[i-1][j];
            if (j - A[i - 1] >= 0) chmax(dp1[i][j], dp1[i - 1][j - A[i - 1]] + B[i - 1]);
        }
    }

    dp2[N + 1][0] = 0;
	for (int i = N; i >= 1; i--) {
		for (int j = 0; j <= T - 1; j++) {
			dp2[i][j] = dp2[i + 1][j];
			if (j - A[i - 1] >= 0) chmax(dp2[i][j], dp2[i + 1][j - A[i - 1]] + B[i - 1]);
		}
	}
 
	int ans = max(dp1[N][T - 1], dp2[1][T - 1]);
	for (int i = 0; i <= N - 1; i++) {
		for (int j = 0; j <= T - 1; j++) {
			ans = max(ans, dp1[i][j] + B[i] + dp2[i + 2][T - 1 - j]);
		}
	}
	cout << ans << endl;
	
	return 0;
}