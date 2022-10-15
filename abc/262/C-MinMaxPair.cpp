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
  ve<int> A(N);
  ll res = 0;
  int same = 0;
  rep(i, N) {
    cin >> A[i];
    A[i] -= 1;
    if(i == A[i]) same += 1;
  }
  rep(i, N) {
    if(A[i] > i and i == A[A[i]]) res += 1;
  } 
  res += (ll)same * (same - 1) / 2;
  cout << res << endl;
}