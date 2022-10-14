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
  double txa, tya, txb, tyb, T, V;
  cin >> txa >> tya >> txb >> tyb >> T >> V;
  int N;
  cin >> N;
  rep(i, N) {
    double x, y;
    cin >> x >> y;
    double dist = sqrt(pow(txa - x, 2) + pow(tya - y, 2)) + sqrt(pow(txb - x, 2) + pow(tyb - y, 2));
    if(dist <= T * V) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}