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
  ve<ll> odd;
  ve<ll> even;
  rep(i, N) {
    int A;
    cin >> A;
    if(A % 2 == 0) even.push_back(A);
    else odd.push_back(A);
  }
  sort(all(odd), greater<ll>());
  sort(all(even), greater<ll>());
  if(odd.size() < 2 && even.size() < 2) {
    cout << -1 << endl;
  } else if(odd.size() < 2) {
    cout << even[0] + even[1] << endl;
  } else if(even.size() < 2) {
    cout << odd[0] + odd[1] << endl;
  } else {
    cout << max(even[0] + even[1], odd[0] + odd[1]) << endl;
  }
}