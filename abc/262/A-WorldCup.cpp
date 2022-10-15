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
  int Y;
  cin >> Y;
  switch(Y % 4) {
    case 0:
      Y += 2;
      break;
    case 1:
      Y += 1;
      break;
    case 2:
      break;
    case 3:
      Y += 3;
      break;
  }
  cout << Y << endl;
}