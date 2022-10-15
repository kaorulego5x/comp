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
  ve<int> A(5);
  set<int> B;
  int count = 0;
  rep(i, 5) {
    cin >> A[i];
    if(A[i] == A[0]) count++;
    B.insert(A[i]);
  }
  if(B.size() == 2 && (count == 2 || count == 3)) { 
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}