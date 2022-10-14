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
    string s, t;
    map<char, ve<int>> mp;
    cin >> s >> t;

    rep(i, s.size()){
        char c = s[i];
        mp[c].push_back(i);
    }

    rep(i, t.size()){
        if(mp.count(t[i]) == 0){
            cout << -1 << endl;
            return 0;
        }
    }

    ll res = 0;
    int s_p = 0;

    rep(i, t.size()){
        char c = t[i];
        auto it = lower_bound(all(mp[c]), s_p);
        if(it == mp[c].end()){
            res += s.size() - s_p;
            s_p = 0;
            res += mp[c][0] - s_p + 1;
            s_p = mp[c][0] + 1;
        }else{
            res += *it - s_p + 1;
            s_p = *it + 1;
        }
    }

    cout << res << endl;

    return 0;
}