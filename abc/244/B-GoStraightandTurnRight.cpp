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

int main() {
  int n;
  string t;
  cin >> n >> t;
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, -1, 0, 1};
  int cx = 0;
  int cy = 0;
  int cs = 0;
  rep(i, n) {
    if(t[n] == 'S') {
      cx += dx[cs];
      cy += dy[cs];
    } else {
      cs += 1;
      cs %= 4;
    }
  }
  cout << cx << " " << cy << endl;
}