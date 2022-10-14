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

int T[10][10];
int N, K;
bool flag = false;

void dfs(int x, int num) {
  if(num == N) {
    if(x == 0) flag = true;
    return;
  }

  rep(i, K) {
    dfs(x ^ T[num][i], num + 1);
  }
}

int main() {
  cin >> N >> K;
  rep(i, N) rep(j, K) cin >> T[i][j];
  dfs(0, 0);
  if(flag) printf("Found\n");
  else printf("Nothing\n");   
  return 0;
}