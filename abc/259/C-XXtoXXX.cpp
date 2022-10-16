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
  string s, t;
  cin >> s >> t;
  if(s.size() > t.size()) {
    cout << "No" << endl;
    return 0;
  }

  ve<pair<char, int>> sa, ta;
  
  int scount = 1;
  for(int i = 1; i < (int)s.size(); i++) {
    if(s[i] == s[i - 1]) {
      scount += 1;
    } else {
      sa.push_back(MP(s[i - 1], scount));
      scount = 1;
    }
  }
  sa.push_back(MP(s.back(), scount));
  
  int tcount = 1;
  for(int i = 1; i < (int)t.size(); i++) {
    if(t[i] == t[i - 1]) {
      tcount += 1;
    } else {
      ta.push_back(MP(t[i - 1], tcount));
      tcount = 1;
    }
  }
  ta.push_back(MP(t.back(), tcount));

  if(sa.size() != ta.size()) {
    cout << "No" << endl;
    return 0;
  }

  rep(i, sa.size()) {
    if(sa[i].first != ta[i].first) {
      cout << "No" << endl;
      return 0;
    } else if(sa[i].second != ta[i].second && (sa[i].second < 2 || sa[i].second >= ta[i].second)) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}