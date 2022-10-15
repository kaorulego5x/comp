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
  int N;
  cin >> N;
  ve<int> P(N);
  rep(i, N - 1){
    cin >> P[i+1];
    P[i+1]--;
  }
  P[0] = 0;
  int p = N - 1;
  int count = 0;
  while(p != 0) {
    p = P[p];
    count++;
  }
  cout << count << endl;
}