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
  if(A < B && A < C) cout << 3 << endl;
  else if(A > B && A > C) cout << 1 << endl;
  else cout << 2 << endl;

  if(B < A && B < C) cout << 3 << endl;
  else if(B > A && B > C) cout << 1 << endl;
  else cout << 2 << endl;

  if(C < A && C < B) cout << 3 << endl;
  else if(C > A && C > B) cout << 1 << endl;
  else cout << 2 << endl;
}