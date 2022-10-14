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
  int N, M;
  cin >> N >> M;
  ve<int> A(N);
  rep(i, N) {
    cin >> A[i];
  }
  ve<ll> DM;
  rep(i, M - 1) {
    DM[0] += A[i];
  }
  for(int i = 1; i <= N - M + 1; i++) {
    DM[i] = DM[i - 1] + A[M + i - 2];
  }
  ve<ll> B;
  rep(i, M) {
    B[0] += i * A[i];
  }
  ll ans = B[0];
  for(int i = 1; i <= N - M; i++) {
    B[i] = B[i - 1] + DM[i] - A[i - 1] + M * A[i + M - 1];
    ans = max(ans, B[i]);
  }
  cout << ans << endl;
}