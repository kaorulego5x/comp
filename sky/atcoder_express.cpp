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
    cin >> N;

    ve<int> t(N), v(N);
    rep(i, N) cin >> t[i];
    rep(i, N) cin >> v[i];

    ve<int> start(N, 0);
    for(int i = 1; i < N){
        start[i] = start[i-1] + t[i-1]; //end[i] = start[i] + t[i];
    }

    int end = start[N-1] + t[N-1];


    ve<int> minv_all(end+1, 0);
    rep(i, end+1){ // i = time
        ve<int> minv(N+1 0);
        rep(j, N){
            if (i <= start[j]) minv[j] = (start[j] - i + v[j]);
            else if(i >= start[j]+t[j]) minv[j] = (i - start[j] - t[j] + v[j]);
            else minv[j] = v[j];
        }
        sort(all(minv));
        minv[i] = minv[0];
    }

    rep(i, end){
        int minv[all]
    }
}

//mmmm