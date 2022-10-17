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
  set<char> a;
  bool low = false;
  bool high = false;
  rep(i, s.size()) {
    int count = a.size();
    a.insert(s[i]);
    if(count == a.size()) {
      cout << "No" << endl;
      return 0;
    }
    if(s[i] - 'a' >= 0 and s[i] - 'z' <= 0) low = true;
    else if(s[i] - 'A' >= 0 and s[i] - 'Z' <= 0) high = true;
  }
  if(!low or !high) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0; 
}