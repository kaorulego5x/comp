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

int n;

tuple<int, int> findFirst(ve<string> m) {
  rep(i, n) {
    rep(j, n) {
      if(m[i][j] == '#') return {i, j};
    }
  }
}

ve<string> rot(ve<string> m) {
  ve<string> nm;
  rep(i, n) {
    string s = "";
    rep(j, n) {
      s += m[j][n-1-i];
    }
    nm.push_back(s);
  }
  return nm;
}

bool isSame(ve<string> s, ve<string> t) {
  tuple<int, int> sf = findFirst(s);
  tuple<int, int> tf = findFirst(t);
  int offI = get<0>(tf) - get<0>(sf);
  int offJ = get<1>(tf) - get<1>(sf);
  rep(si, n) {
    rep(sj, n) {
      int ti = si + offI;
      int tj = sj + offJ;
      if(0 <= ti and ti < n and 0 <= tj and tj < n) {
        if(s[si][sj] != t[ti][tj]) return false;
      } else {
        if(s[si][sj] == '#') return false;
      }
    }
  }
  return true;
}

int main() {
  cin >> n;
  ve<string> s(n), t(n);
  rep(i, n) cin >> s[i];
  rep(i, n) cin >> t[i];

  int cntS = 0;
  int cntT = 0;
  rep(i, n) rep(j, n) if(s[i][j] == '#') cntS += 1;
  rep(i, n) rep(j, n) if(t[i][j] == '#') cntT += 1;

  if(cntS != cntT) {
    cout << "No" << endl;
    return 0;
  }

  rep(i, 4) {
    if(isSame(s, t)) {
      cout << "Yes" << endl;
      return 0;
    }
    t = rot(t);
  }
  cout << "No" << endl;
  return 0;
}