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
  map<string, int> M;
  int N;
  cin >> N;
  rep(i, N) {
    string S;
    cin >> S;
    if(M.find(S) == M.end()) {
      M[S] = 1;
      cout << S << endl;
    } else {
      cout << S + '(' + to_string(M[S]) + ')' << endl;
      M[S] += 1;
    }
  }
}