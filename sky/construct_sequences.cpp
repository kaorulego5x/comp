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

int main() {
    int N;
    cin >> N;
    ve<int> p(N);
    rep(i, N) cin >> p[i], p[i]--;
  
    ve<int> a(N, 0);
    ve<int> b(N, 0);
  
    int aim = 600000000;
    rep(i, N) a[i] = i * N + 1;
    rep(i, N) b[i] = aim - a[i];

    rep(i, N) {
        a[p[i]] += i;
    }
  
    rep(i, N) cout << a[i] << " ";
    cout << endl;
    rep(i, N) cout << b[i] << " ";
  
    return 0;
}