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

int N;
ll K;
ve<ll> A;

bool check(int X){
    ll now = 0;
    rep(i, N) now += (A[i]-1) / X;
    return now <= K;
}

int main(){
    cin >> N >> K;
    A.resize(N);
    rep(i, N) cin >> A[i];
    int l = 0, r = 1e9;
    while(r-l>1){
        int x = (l+r)/2;
        if(check(x)) r = x;
        else l = x;
    }
    cout << r << endl;
    return 0;
}