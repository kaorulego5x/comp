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
  string s;
  cin >> s;
  int n = s.size();
  string maxs = s;
  string mins = s;
  rep(i, n) {
    string news = s;
    char lastC = news[0];
    news.erase(0, 1);
    news += lastC;
    if(news > maxs) maxs = maxs;
    if(news < mins) mins = news;
  }
  cout << mins << endl;
  cout << maxs << endl;
}