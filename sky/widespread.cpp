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

int N, A, B, H[101010];

bool check(ll x){
    ll c = 0;
    rep(i, N){
        ll h = 1LL * H[i] - 1LL * x * B;
        if (h <= 0) continue;
        c += h / A;
        if(h % A) c++;
    }
    return c <= x;
}

int main(){
    cin >> N >> A >> B;
    A -= B;
    rep(i, N) cin >> H[i];

    int ng = 0, ok = 1010101010;
    while(ng + 1 != ok){
        int x = (ng + ok) / 2;
        if (check(x)) ok = x;
        else ng = x;
    }
    cout << ok << endl;
}