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
  int n;
  cin >> n;
  set<int> can;
  reps(i, 1, 150) {
    reps(j, 1, 150) {
      can.insert(4*i*j+3*i+3*j); 
    }
  }
  int count = 0;
  rep(i, n) {
    int s;
    cin >> s;
    if(can.find(s) == can.end()) count += 1;
  }
  cout << count << endl;
}