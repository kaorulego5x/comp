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
  string S;
  cin >> S;
  if(S[0] == S[1] and S[1] == S[2]) cout << -1 << endl;
  else if(S[0] == S[1]) cout << S[2] << endl;
  else if(S[0] == S[2]) cout << S[1] << endl;
  else if(S[1] == S[2]) cout << S[0] << endl;
  else cout << S[0] << endl;
}