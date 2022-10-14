#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K; cin >> N >> K;
  vector<double> rates(N);
  for(int i = 0; i < N; i++) {
    cin >> rates[i];
  }

  sort(rates.begin(), rates.end(), greater<double>());

  double score = 0;
  for(int i = 0; i < K; i++) {
    score = (score + rates[K-1-i]) / 2.0;
  }
  printf("%.6f", score);
}