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
  int T;
  cin >> T;

  int N;
  cin >> N;
  queue<int> A;
  rep(i, N) {
    int time;
    cin >> time;
    A.push(time);
  }

  int M;
  cin >> M;
  ve<int> B(M);
  rep(i, N) {
    cin >> B[i];
  }

  if(N < M) {
    cout << "no" << endl;
    return;
  }

  bool flag = false;
  rep(i, M) {
    while(!A.empty()) {
      int takoT = A.front();
      A.pop();

      int cusT = B[i];
      if(takoT + T >= cusT) {
        if(i == M-1) { flag = true; }
        break;
      } else {
        continue;
      }
    }
  }

  if(flag) cout << "yes" << endl;
  else cout << "no" << endl;
}