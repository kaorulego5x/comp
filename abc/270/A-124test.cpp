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
  ve<int> score(2);
  cin >> score[0] >> score[1];
  ve<ve<bool>> AB(2, ve<bool>(3, false));
  rep(i, 2) {
    AB[i][2] = score[i] / 4 == 1; 
    score[i] %= 4;
    AB[i][1] = score[i] / 2 == 1;
    score[i] %= 2;
    AB[i][0] = score[i] == 1;
  }
  int ans = 0;
  if(AB[0][0] && AB[1][0]) ans += 1;
  if(AB[0][1] && AB[1][1]) ans += 2;
  if(AB[0][2] && AB[1][2]) ans += 4;
  cout << ans << endl;
}