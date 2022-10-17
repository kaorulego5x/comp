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
  string s;
  cin >> s;
  int n = s.size();
  int x = 0;
  rep(i, n) {
    if(s[i] == 'a') x += 1;
    else break;
  }
  int y = 0;
  for(int i = n - 1; i >= 0; i--) {
    if(s[i] == 'a') y += 1;
    else break;
  }
  if(x == n) {
    cout << "Yes" << endl;
    return 0;
  }
  if(x > y) {
    cout << "No" << endl;
    return 0;
  }
  for(int i = 1; i <= (n-x-y)/2; i++) {
    if(s[x+i-1] != s[n-y-i]) cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}