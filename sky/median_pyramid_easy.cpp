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

void solve(int N, int x) {
    if (x <= 1 || x >= N*2-1) {
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;
    vector<int> res(N*2-1, -1);
    res[N-2] = 1;
    res[N-1] = x;
    res[N] = N*2-1;
    int iter = 0;
    for (int v = 2; v < N*2-1; ++v) {
        if (v == x) continue;
        while (res[iter] != -1) ++iter;
        res[iter] = v;
    }
    for (auto v : res) cout << v << endl;
}

int main() {
    int N, x;
    cin >> N >> x;
    solve(N, x);
}