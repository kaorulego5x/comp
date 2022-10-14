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
    int b1 = 0, b4 = 0, b2 = 0;
    rep(i, N){
        int a; 
        cin >> a;
        if(a % 2 == 1) b1++;
        else if(a % 4 == 0) b4++;
        else b2++;
    }
    if(b2 == 0){
        if (b4 >= b1-1) cout << "Yes";
        else cout << "No";
    }else if(b4 >= b1){
        cout << "Yes"; 
    }else cout << "No";
}