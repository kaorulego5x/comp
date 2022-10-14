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
  string P;
  cin >> P;
  // 全部倒れてたらtrue
  ve<bool> A {P[6] == '0', P[3] == '0', P[7] == '0' && P[1] == '0', P[4] == '0' && P[0] == '0', P[8] == '0' && P[2] == '0', P[5] == '0', P[9] == '0'};
  ve<bool> R {false, true, false};
  int count = 0;
  rep(i, 7) {
    if (count < 3 && A[i] == R[count]) {
      count++;
    } else continue;
  }
  if (count == 3 && P[0] == '0') cout << "Yes" << endl;
  else cout << "No" << endl;
}