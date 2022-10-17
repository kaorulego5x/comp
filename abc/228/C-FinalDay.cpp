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
  int n, k;
  cin >> n >> k;
  ve<int> a(n);
  rep(i, n) {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    a[i] = s1+s2+s3;
  }
  ve<int> s = a;
  sort(all(s));
  rep(i, n){
    int ms = a[i];
    ve<int>::iterator pos = lower_bound(all(s), ms+301);
    int idx = pos - s.begin();
    if(n - idx <= k - 1) cout << "Yes" << endl;
    else cout << "No" << endl; 
  }
  return 0;
}