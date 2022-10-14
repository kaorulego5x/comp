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

  rep(i, N+1) {
    int leg = M - 4 * i;
    if(leg < 0) {
      break;
    }
    int adult = 3 * N + i - M;
    if (0 <= adult && adult <= N-i) {
      cout << adult << " " << N-i-adult << " " << i << endl;
      return 0;
    }
  }

  cout << "-1 -1 -1" << endl;
}