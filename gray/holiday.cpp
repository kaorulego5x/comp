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
    string S;
    cin >> S;
    if(S == "SUN") cout << 7;
    else if(S == "MON") cout << 6;
    else if(S == "TUE") cout << 5;
    else if(S == "WED") cout << 4;
    else if(S == "THU") cout << 3;
    else if(S == "FRI") cout << 2;
    else cout << 1;
}