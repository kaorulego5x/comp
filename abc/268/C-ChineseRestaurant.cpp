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
  ve<int> P(N);
  ve<int> count(N);
  rep(i, N) {
    cin >> P[i];
    count[(P[i] - i) % N]++;
    count[(P[i] - 1 - i) % N]++;
    count[(P[i] + 1 - i) % N]++;
  };
  int res = 0;
  rep(i, N) {
    res = max(res, count[i]);
  }
  cout << res << endl;
}