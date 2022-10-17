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

string convert(ll x) {
  string res = "";
  while(x > 0) {
    res.push_back('0' + x % 2);
    x /= 2;
  }
  reverse(all(res));
  return res;
}

int main() {
  ll k;
  cin >> k;
  string two = convert(k);
  rep(i, two.size()) {
    if(two[i] == '1') cout << "2";
    else cout << "0"; 
  }
  cout << endl;
}