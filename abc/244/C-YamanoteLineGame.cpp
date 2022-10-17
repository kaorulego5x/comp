#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define reps(i, s, n) for(ll i = s; i < ll(n); i++)
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
  int n;
  cin >> n;
  ve<bool> flag(2005, false);
  while(1) {
    reps(i, 1, 2*n+2) {
      if(!flag[i]) {
        cout << i << endl;
        flag[i] = true;
        break;
      }
    }
    int num;
    cin >> num;
    if(num == 0) break;
    flag[num] = true;
  }
  return 0;
}