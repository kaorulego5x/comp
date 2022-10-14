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

ve<int> Zalgo(const string &S){
    int N = (int)S.size();
    ve<int> res(N);
    res[0] = N;
    int i = 1, j = 0;
    while(i < N){
        while(i+j < N && S[j] == S[i+j]) j++;
        res[i] = j;
        if (j == 0) i++; continue;
        int k = 1;
        while(i+k < N && k+res[k] < j) res[i+k] = res[k], k++;
        i += k, j -= k;
    }
    return res;
}

int main(){
    int N;
    string S;
    cin >> N >> S;

    int res = 0;
    rep(i, N){
        string T = S.substr(i);
        auto lcp = Zalgo(T);
        rep(j, T.size()){
            int l = min(lcp[j], j);
            res = max(res, l);
        }
    }

    cout << res << endl;
}