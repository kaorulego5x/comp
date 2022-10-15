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
  ve<string> R(N);
  rep(i, N) {
    cin >> R[i];
  }
  for(int i = 0; i < N - 1; i++) {
    for(int j = i + 1; j < N; j++) {
      if(R[i][j] == 'W') {
        if(R[j][i] != 'L') {
          cout << "incorrect" << endl;
          return 0;
        } 
      } else if(R[i][j] == 'L') {
        if(R[j][i] != 'W') {
          cout << "incorrect" << endl;
          return 0;
        }
      } else {
        if(R[j][i] != 'D') {
          cout << "incorrect" << endl;
          return 0;
        }
      }
    }
  }
  cout << "correct" << endl;
  return 0;
}