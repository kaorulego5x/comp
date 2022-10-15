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
  rep(i, pow(2, M)) {
    int count = 0;
    rep(j, M) {
      if(i >> j & 1) count++;
    } 
    if(count != N) continue;
    string ans = "";
    for(int j = M - 1; j >=0; j--) {
      if(i >> j & 1) ans += to_string(j+1) + " ";
    }
    ans.pop_back();
    cout << ans << endl;
  }
}