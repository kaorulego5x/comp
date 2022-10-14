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
  int A, B, C;
  cin >> A >> B >> C;
  bool p = false;
  bool m = false;
  if(A+B == C) p = true;
  if(A-B == C) m = true;
  if(m && p) cout << "?" << endl;
  else if(p) cout << "+" << endl;
  else if(m) cout << "-" << endl;
  else cout << "!" << endl;
}