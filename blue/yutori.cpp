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

int N, K, C;

vector<int> sub(const string &S){
  int N = S.size();
  int cur = 0, last = -C-1;
  vector<int> res(N+1, 0);
  for(int i = 0; i < N; i++){
    if(i - last > C && S[i] == 'o') ++cur, last = i;
    res[i+1] = cur;
  }
  return res;
}

void solve(const string &S){
  const auto &left = sub(S);
  string T = S;
  reverse(all(T));
  const auto &right = sub(T);
  for (int i = 0; i < N; i++){
    if(S[i] == 'x') continue;
    if(left[i] + right[N-i-1] < K) cout << i+1 << endl;
  }
}

int main(){
  string S;
  cin >> N >> K >> C >> S;
  solve(S);
}