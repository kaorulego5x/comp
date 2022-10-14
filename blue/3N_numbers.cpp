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
    int N; cin >> N;
    ve<ll> a(N*3);
    rep(i, N*3) cin >> a[i];

    ve<ll> S(N*2+1, 0);
    priority_queue<ll, ve<ll>, greater<ll>> que1;
    rep(i, N){
        S[i+1] = S[i] + a[i];
        que1.push(a[i]);
    }
    for(int i = N; i < N * 2; i++){
        ll mi = que1.top();
        if(a[i] > mi){
            S[i+1] = S[i] - mi + a[i];
            que1.pop();
            que1.push(a[i]);
        }
        else S[i+1] = S[i];
    }

    ve<long long> T(N*2+ 1, 0);
    priority_queue<long long> que2;
    for (int i = 0; i < N; ++i) {
        T[i+1] = T[i] + a[N*3-1 - i];
        que2.push(a[N*3-1 - i]);
    }
    for (int i = N; i < N*2; ++i) {
        long long ma = que2.top();
        if (a[N*3-1 - i] < ma) {
            T[i+1] = T[i] - ma + a[N*3-1 - i];
            que2.pop();
            que2.push(a[N*3-1 - i]);
        }
        else T[i+1] = T[i];
    }

    long long res = -(1LL<<60);
    for (int i = N; i <= N*2; ++i) {
        chmax(res, S[i] - T[N*3-i]);
    }
    cout << res << endl;
}