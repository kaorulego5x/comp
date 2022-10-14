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
  string s;
  cin >> s;
  string res;
  int count = 1;
  for(int i = 1; i < s.size(); i++) {
    if(s[i] == s[i-1]) {
      count++;
    } else {
      res += s[i-1] + to_string(count);
      count = 1;
    }
    if(i == s.size() - 1){
      res += s[i] + to_string(count);
    }
  }
  cout << res << endl;
}