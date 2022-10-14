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
  int N, Q;
  cin >> N >> Q;
  ve<ve<int>> A(N, ve<int>(0));
  rep(i, N) {
    int L;
    cin >> L;
    rep(j, L) {
      int a;
      cin >> a;
      A[i].push_back(a);
    }
  }
  rep(i, Q) {
    int s, t;
    cin >> s >> t;
    cout << A[s-1][t-1] << endl;
  }
}