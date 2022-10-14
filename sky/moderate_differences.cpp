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

long long N, A, B, C, D;
int main() {
    cin >> N >> A >> B >> C >> D;
    A *= 2, B *= 2, C *= 2, D *= 2;
    --N;
    long long diff = abs(A - B);
    long long gap = (C + D) / 2;
    long long center = 0;
    if (N & 1) center = gap;
    long long radius = (D - C) / 2 * N;

    bool ok = false;
    for (int i = 0; i < N*2; ++i) {
        long long left = center - radius, right = center + radius;
        if (right > D * N) break;
        if (left <= diff && diff <= right) ok = true;
        center += gap * 2;
    }
    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}