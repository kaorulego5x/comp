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
    int A, B;
    cin >> A >> B;
    if (A == 1 || B == 1){
        if(A==1 && B==1) cout << "Draw";
        else if(A==1) cout << "Alice";
        else cout << "Bob";
    }else if(A > B){
        cout << "Alice";
    }else if (A < B){
        cout << "Bob"
    }else cout << "Draw";
}