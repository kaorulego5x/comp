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

string S;
int N;

int main(){
    cin >> S;
    N = S.size();
    rep(i, N-1){
        if(S[i] == S[i+1]){
            cout << i+1 << " " << i+2 << endl;
            return 0;
        }
    }
    rep(i, N-2){
        if(S[i] == S[i+2]){
            cout << i+1 << " " << i+3 << endl;
            return 0;
        }
    }
    cout << "-1 -1" << endl;
}