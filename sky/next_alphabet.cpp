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
    string s;
    ll K;
    cin >> s >> K;
    int N = s.size();
    rep(i, N){
        if(('z'-s[i])+1 <= K && s[i] != 'a'){
            s[i] = 'a';
            K -= (('z'-s[i])+1);
        }
        if(i == N-1){
            K %= 26;
            rep(j, K){
                if(s[i] == 'z') s[i] = 'a';
                else s[i]++;
            }
        }
    }
    cout << s << endl;
}