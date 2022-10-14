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
    int N, M;
    cin >> N >> M;
    ve<bool> red(N, false);
    red[0] = true;
    ve<int> ball(N, 1);

    rep(i, M){
        int x, y;
        cin >> x >> y; x--; y--;
        if (red[x]) red[y] = true;
        ball[x] -= 1;
        ball[y] += 1;

        if(ball[x] == 0){
            red[x] = false;
        }
    }


    int cnt = 0;
    rep(i, N){
        if (red[i]) cnt++;
    }
    cout << cnt << endl;
}