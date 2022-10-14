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

ll com[51][51];

int main(){
    com[0][0] = 1;
    for(int i = 1; i < 51; i++){
        rep(j, i+1){
            com[i][j] += com[i-1][j];
            if(j>0) com[i][j] += com[i-1][j-1];
        }
    }

    int N, A, B;
    cin >> N >> A >> B;
    ve<ll> v(N);
    rep(i, N) cin >> v[i];
    sort(all(v), greater<>());

    ll sum = 0;
    rep(i, A) sum += v[i];
    double ave = (double)(sum) / A;

    ll res = 0;
    int num = 0;
    rep(i, N) if(v[i] == V[A-1]) num++;
    if(v[0] == v[A-1]){
        for(j = A; j<=B; j++){
            res += com[num][j];
        }
    }else{
        int a = 0;
        rep(i, A) if(v[i] == v[A-1]) a++;
        res = com[num][a];
    }

    cout << fixed << setprecision(10) << ave << endl;
    cout << res << endl;
}