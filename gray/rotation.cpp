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
    ve<string> cell(2);
    rep(i, 2) cin >> cell[i];
    if(cell[0][0] == cell[1][2] && cell[0][1] == cell[1][1] && cell[0][2] == cell[1][0]) cout << "YES";
    else cout << "NO";
}