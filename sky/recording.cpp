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

int main(){
    int N, C;
    cin >> N >> C;

    const int t_max = 100000 + 5;
    ve<ve<int>> v(30, ve<int>(t_max));
    rep(i, N){
        int a, b, c;
        cin >> a >> b >> c;
        c--;
        v[c][a]++;
        v[c][b]--; //imos法
    }
    rep(i, C) rep(j, t_max-1) v[i][j+1] += v[i][j];
    rep(i, C) rep(j, t_max-1){
        if(v[i][j] == 0 && v[i][j+1] == 1) v[i][j]++; //0.5分の調整
    }
    int ans = 0;
    rep(j, t_max){
        int cnt = 0;
        rep(i, C) if(v[i][j]) cnt++;
        chmax(max, cnt); 
    }
    cout << ans << endl;
}