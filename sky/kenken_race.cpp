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
    int N, A, B, C, D;
    string S;
    cin >> N >> A >> B >> C >> D >> S;

    S = '#' + S + '#';    

    auto can_reach = [&](int start, int end){
        for(int i = start; i + 1 <= end; i++){
            if(S[i] == '#' && S[i+1] == '#') return false;
        }
        return true;
    };

    if (!can_reach(A, C) || !can_reach(B, D)){
        cout << "No" << endl;
        return 0;
    }

    if (C > D){
        bool snuke_can_over = false;
        for(int i = B; i <= D; i++){
            if(S[i-1] == '.' && S[i] == '.' && S[i+1] == '.'){
                snuke_can_over = true;
                break;
            }
        }
        if (!snuke_can_over){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}