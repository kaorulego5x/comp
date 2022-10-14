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
    ll S[51][51]{};
    ll D[50][50];
    int N;
    cin >> N;

    rep(i, N) rep(j, N) cin >> D[i][j];
    rep(i, N) rep(j, N){
        S[i+1][j+1] = D[i][j];
    }
    rep(i, N) rep(j, N){
        S[i+1][j+1] += (S[i+1][j] + S[i][j+1] - S[i][j]);
    }

    int Q;
    cin >> Q;
    int P[Q];
    rep(i, Q) cin >> P[i];
    
    ll d[N * N + 1]{};
    rep(i, N) rep(j, N) for(int k = i+1; k <= N; k++) for(int l = j+1; l <= N; l++){
        int t = (k - i) * (l - j);
        d[t] = max(d[t], S[k][l] + S[i][j] - S[i][l] - S[j][k]);
    }

    ll v = 0;
    for(int i = 1; i <= N * N; i++){
        d[i] = max(v, d[i]);
        v = max(v, d[i]);
    }
    for(int i : P){
        cout << d[i] << endl;
    }
    return 0;
}