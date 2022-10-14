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
    int N, M;
    cin >> N >> M;
    map<ll, ll> rem;
    ll sum = 0;
    ll cnt = 0;
    rem[sum]++; //0の分
    rep(i, N){
        ll a; cin >> a;
        sum = (sum + a) % M;
        rem[sum]++;
    }
    for(map<ll, ll>::iterator it = rem.begin(); it != rem.end(); ++it){
        cnt += it->second * (it->second - 1) / 2;
    }
    cout << cnt << endl;
}