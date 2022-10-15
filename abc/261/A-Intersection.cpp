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
  int L1, R1, L2, R2;
  cin >> L1 >> R1 >> L2 >> R2;
  if(R1 <= L2 or R2 <= L1) {
    cout << 0 << endl;
  } else {
    int low = max(L1, L2);
    int high = max(R1, R2);
    cout << (R1 - L1) + (R2 - L2) - (high-low) << endl;
  }
}