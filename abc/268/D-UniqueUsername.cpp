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

void dfs(int cur, ve<string> &S, ve<string> &T, int remain, string ans) {
  if (remain < 0) return;

  if(cur == S.size()) {
    if(ans.size() >= 3 && !binary_search(all(T), ans)) {
      cout << ans << endl;
      exit(0);
    }
    return;
  }

  if(ans.size() > 0 && ans.back() != '_') {
    dfs(cur, S, T, remain, ans + '_');
  } else {
    dfs(cur + 1, S, T, remain, ans + S[cur]);
    if(ans.size() > 0) dfs(cur, S, T, remain - 1, ans + '_');
  }
}

int main() {
  int N, M;
  cin >> N >> M;
  ve<string> S(N), T(M);
  rep(i, N) cin >> S[i];
  rep(i, M) cin >> T[i];
  sort(all(S));
  sort(all(T));

  int remain = 16;
  rep(i, N) {
    remain -= S[i].size();
  }
  remain -= N - 1;

  do {
		dfs(0, S, T, remain, "");
	}
	while(next_permutation(all(S)));
	
	cout << -1 << endl;
	
	return 0;
}