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
  ll k;
  cin >> s >> k;
  int n = s.size();

  ve<char> sa;
  rep(i, n) {
    sa.push_back(s[i]);
  }
  sort(all(sa));
  
  ve<int> v;
  rep(i, n) {
    v.push_back(i);
  }
  
  int count = 0;
  string prev = "";
  do{
    string ns = "";
    rep(i, n) {
      ns += sa[v[i]];
    }
    if(prev == ns) continue;
    count += 1; 
    prev = ns;
    if(count == k) {
      cout << ns << endl;
      return 0; 
    }
  } while(next_permutation(all(v)));
  return 0;
}