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
	cin>>N;
	ve<int> A(N);
  rep(i, N){
    cin >> A[i];
  }
  ve<int> B;
  ve<int> C;
  rep(i, N) {
    if(find(all(B), A[i]) == A.end()) {
      B.push_back(A[i]);
    } else {
      C.push_back(A[i]);
    }
  }
  sort(all(B));
  sort(all(C), greater<int>());
  B.insert(B.end(), C.begin(), C.end());
  deque<int> que;
  fora(b, B) {
    que.push_back(b);
  }
  int count = 1;
  while(!que.empty()) {
    if(que.front() == count) {
      que.pop_front();
    }
    else if(que.size() < 2) break;
    else {
      que.pop_back();
      que.pop_back();
    }
    count++;
  }
  cout << count - 1 << endl;
}