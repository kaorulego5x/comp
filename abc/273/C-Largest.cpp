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
  ve<ll> A(N);
  map<ll, int> c;
  ve<ll> s;
  rep(i,  N) {
    cin >> A[i];
    if (c.find(A[i]) == c.end()) {
      c[A[i]] = 1;
      s.push_back(A[i]);
    } else {
      c[A[i]]++;
    }
  }
  sort(all(s));
  ve<int> K(N, 0);
  rep(i, s.size()) {
    K[s.size() - i - 1] = c[s[i]];
  }
  rep(i, N) {
    cout << K[i] << endl;
  }
}