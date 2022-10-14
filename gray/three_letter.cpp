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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    char dif = 'A' - 'a';
    cout << (char)(s1[0] + dif) << (char)(s2[0] + dif) << (char)(s3[0] + dif);
    return 0;
}