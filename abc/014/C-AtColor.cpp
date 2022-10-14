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
  ve<int> S(1000001, 0);
  int n;
  cin >> n;
  rep(i, n) {
    int a, b;
    S[a]++;
    S[b]--;
  }
  int ans = 0;
  int sum = 0;
  rep(i, 1000001) {
    sum += S[i];
    ans = max(ans, sum);
  }
  cout << ans << endl;
}