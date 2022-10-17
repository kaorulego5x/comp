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
  int a, b;
  cin >> a >> b;
  double xa = a / sqrt((double)pow(a, 2) + (double)pow(b, 2)); 
  double xb = b / sqrt((double)pow(a, 2) + (double)pow(b, 2));
  printf("%.12f %.12f\n", xa, xb);
}