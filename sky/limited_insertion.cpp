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

int N;
vector<int> a;

void solve() {
    vector<int> res;
    for (int i = 0; i < N; ++i) {
        int pivot = -1;
        for (int j = (int)a.size()-1; j >= 0; --j) {
            if (a[j] == j) {
                pivot = j;
                break;
            }
        }
        if (pivot == -1) {
            cout << -1 << endl;
            return;
        }

        res.push_back(pivot + 1);
        a.erase(a.begin() + pivot);
    }
    reverse(res.begin(), res.end());
    for (auto v : res) cout << v << endl;
}

int main() {
    cin >> N;
    a.resize(N);
    for (int i = 0; i < N; ++i) cin >> a[i] , --a[i];
    solve();
}