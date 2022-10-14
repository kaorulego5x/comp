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
    int N, dist;
    cin >> N;

    int u = 0, vmx = -1, mx = 0;
    for (int v = 1; v < N; ++v) {
        cout << "? " << u+1 << " " << v+1 << endl;
        cin >> dist;
        if (mx < dist) {
            mx = dist;
            vmx = v;
        }
    }
    for (int w = 0; w < N; ++w) {
        if (w == vmx) continue;
        cout << "? " << vmx+1 << " " << w+1 << endl;
        cin >> dist;
        mx = max(mx, dist);
    }
    cout << "! " << mx << endl;
}