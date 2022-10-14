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
  ll N, M, T;
  cin >> N >> M >> T;
  ve<ll> A(N-1);
  ve<ll> B(N-1, 0);
  rep(i, N-1) {
    cin >> A[i];
  }
  rep(i, M) {
    ll X, Y;
    cin >> X >> Y;
    X--;
    B[X] = Y;
  }
  rep(i, N - 1){
    T += B[i];
    if(T > A[i]) {
      T -= A[i];
      continue;
    } else {
      cout << "No" << endl; 
      exit(0);
    };
  }
  cout << "Yes" << endl;
  return 0;
}