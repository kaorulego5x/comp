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
  int n, m;
  cin >> n >> m;
  ve<ve<int>> G(n, ve<int>(0));
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  int count = 0; 
  for(int i = 1; i <= n - 2; i++) {
    for(int j = i + 1; j <= n - 1; j++) {
      for(int k = j + 1; k <= n; k++) {
        bool flagA = false;
        bool flagB = false;
        bool flagC = false;
        fora(a, G[i]){
          if(a == j) flagA = true;
        }
        fora(a, G[j]) {
          if(a == k) flagB = true;
        }
        fora(a, G[k]) {
          if(a == i) flagC = true;
        }
        if(flagA && flagB && flagC) {
          count++;
        }
      }
    }
  }
  cout << count << endl;
}