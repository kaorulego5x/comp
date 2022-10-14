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
    int N;
    ll H;
    cin >> N >> H;
    ve<ll> A(N), B(N);
    rep(i, N) cin >> A[i] >> B[i];

    ll amax = *max_element(all(A));
    sort(all(B));
    auto itr = lower_bound(all(B), amax); 
    int great = B.end() - itr;
    reverse(all(B));
    int cnt = 0;
    rep(i, great){
        if(H > 0){
            H -= B[i]; cnt++;
        }
        else{
            cout << cnt << endl;
            return 0;
        }
    }
    if(H > 0){
        if (H % amax == 0) cout << cnt + H / amax;
        else cout << cout << cnt + H / amax + 1;
    }
}