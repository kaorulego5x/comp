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
    ll S;
    cin >> S;
    ll X1, Y1, X2, Y2, X3, Y3;
    X1 = Y1 = 0;
    X2 = pow(10, 9);
    Y2 = 1;
    ll Q = S / pow(10, 9);
    ll r = S - pow(10, 9) * Q;
    if(r != 0){
        Y3 = Q + 1;
        X3 = pow(10, 9) - r;
    }else{
        Y3 = Q;
        X3 = 0;
    }
    cout << X1 << Y1 << X2 << Y2 << X3 << Y3;
}