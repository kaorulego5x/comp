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

ve<bool> flag(200005, false);
ve<ve<int>> skill(200005);
set<int> nes;

void dfs(int cs) {
  if(cs == 0) return;
  flag[cs] = true;
  for(auto& ns: skill[cs]) {
    nes.insert(ns);
  }
  for(auto& ns: skill[cs]) {
    if (!flag[ns]) dfs(ns);
  }
  return;
}

int main() {
  int n;
  cin >> n;
  ve<ll> t(n);
  rep(i, n) {
    cin >> t[i];
    int k;
    cin >> k;
    rep(j, k) {
      int s;
      cin >> s;
      s--;
      skill[i].push_back(s);
    }
  }
  nes.insert(n-1);
  dfs(n-1);
  ll res = 0;
  for(auto& s: nes) {
    res += t[s];
  }
  cout << res << endl;
}