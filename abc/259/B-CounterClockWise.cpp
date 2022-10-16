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
#define PI 3.14159265

int main() {
  double a,b,d;
  cin >> a >> b >> d;
  printf("%.6f %.6f\n", a*cos(d*PI/180)-b*sin(d*PI/180), b*cos(d*PI/180)+a*sin(d*PI/180));
}