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

  map<string, int> vote;

  int res = 0;
  string sres;
  rep(i, N) {
    string s;
    cin >> s;
    if(vote.find(s) == vote.end()) vote.insert(MP(s, 1));
    else vote[s]++; 
    if(res <= vote[s]) {
      res = vote[s];
      sres = s;
    }
  }

  cout << sres << endl;
}