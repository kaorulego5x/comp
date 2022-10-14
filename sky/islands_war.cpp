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

int N, M;
typedef pair<int, int> pint;

ve<pint> A;

bool cmp(pint a, pint b) {return a.Se < b.Se;}

int main(){
    cin >> N >> M;
    A.resize(M);
    rep(i, M) cin >> A[i].Fi >> A[i].Se;
    sort(all(A), cmp);
    int res = 0;
    int endtime = 0;
    rep(i, M){
        if(A[i].Fi >= endtime){
            endtime = A[i].second;
            res++;
        }
    }
    cout << res << endl;
}