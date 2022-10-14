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
  ve<ve<int>> G(N, ve<int>(0));
  rep(i, M) {
    int A, B;
    cin >> A >> B;
    A--, B--;
    G[A].push_back(B);
  }
  rep(i, N) {
    set<int> FF;
    fora(fr, G[i]) {
      fora(frfr, G[fr]) {
        if(frfr == i) continue;
        if(find(all(G[i]), frfr) != G[i].end()) {
          FF.insert(frfr);
        }
      }
    }
    cout << FF.size() << endl;
  }
}