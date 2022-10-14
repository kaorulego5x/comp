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

int N, W;

int main(){
    cin >> N >> W;
    pair<ll, ll> wv[101];
    rep(i, N){
        int w, v;
        cin >> w >> v;
        wv[i].Fi = w; 
        wv[i].Se = v;
    }
    int w1 = wv[0].Fi;
    ve<int> g0, g1, g2, g3;
    rep(i, N){
        if(wv[i].Fi - w1 == 0){
            g0.PB(wv[i].Se);
        }else if(wv[i].Fi - w1 == 1){
            g1.PB(wv[i].Se);
        }else if(wv[i].Fi - w1 == 2){
            g2.PB(wv[i].Se);
        }else{
            g3.PB(wv[i].Se);
        }
    }

    sort(all(g0), greater<int>());
    sort(all(g1), greater<int>());
    sort(all(g2), greater<int>());
    sort(all(g3), greater<int>());
    ll sum0[101],sum1[101],sum2[101],sum3[101];
    sum0[0] = sum1[0] = sum2[0] = sum3[0] = 0;
    rep(i, g0.size()) sum0[i+1] = sum0[i] + g0[i];
    rep(i, g1.size()) sum1[i+1] = sum1[i] + g1[i];
    rep(i, g2.size()) sum2[i+1] = sum2[i] + g2[i];
    rep(i, g3.size()) sum3[i+1] = sum3[i] + g3[i];

    ll res = 0;
    rep(i, g0.size() + 1){
        rep(j, g1.size() + 1){
            rep(k, g2.size() + 1){
                rep(l, g3.size() + 1){
                    if (w1 * i + (w1 + 1) * j + (w1 + 2) * k + (w1 + 3) * l <= W){
                        chmax(res, sum0[i] + sum1[j] + sum2[k] + sum3[l]);
                    }
                }
            }
        }
    }

    cout << res << endl;
    return 0;
}