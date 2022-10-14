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
  set<pair<int, int>> P;
  rep(i, M) {
    int k;
    cin >> k;
    ve<int> L(k);
    rep(j, k) {
      cin >> L[j];
    }
    rep(a, k-1) {
      for(int b = a+1; b < k; b++) {
        P.insert(MP(L[a], L[b]));
      }
    }
  }
  if(P.size() == N * (N - 1) / 2) cout << "Yes" << endl;
  else cout << "No" << endl;
}