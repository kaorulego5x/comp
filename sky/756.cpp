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

vector<pair<long long, long long> > prime_factorize(long long n) {
    vector<pair<long long, long long> > res;
    for (long long p = 2; p * p <= n; ++p) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) { ++num; n /= p; }
        res.push_back(make_pair(p, num));
    }
    if (n != 1) res.push_back(make_pair(n, 1));
    return res;
}

int N;
map<long long, int> sisuu;

long long rec(map<long long, int>::iterator p, long long mul) {
    if (p == sisuu.end()) {
        if (mul == 1) return 1;
        else return 0;
    }
    long long res = 0;
    for (int i = 0; i < p->second + 1; ++i) {
        if (mul % (i+1) != 0) continue;
        res += rec(++p, mul / (i+1));
        --p;
    }
    return res;
}

int main() {
    cin >> N;
    for (int i = 2; i <= N; ++i) {
        auto ps = prime_factorize(i);
        for (auto it : ps) sisuu[it.first] += it.second;
    }
    cout << rec(sisuu.begin(), 75) << endl;
}