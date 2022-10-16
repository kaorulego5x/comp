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
  int n, k, q;
  cin >> n >> k >> q;
  ve<bool> m(n, false);
  map<int, int> p;
  rep(i, k) {
    int a;
    cin >> a;
    a--;
    m[a] = true;
    p[i] = a;
  }
  rep(i, q) {
    int l;
    cin >> l;
    l--;
    if(p[l] == n - 1) continue;
    if(m[p[l]+1] == true) continue;
    m[p[l]] = false;
    m[p[l]+1] = true;
    p[l] += 1; 
  }
  rep(i, k) {
    cout << p[i];
    if(i != k-1) {
      cout << " ";
    }
  }
  cout << endl;
}