#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> array = {1,2,3,4,5,6};

  const int count = N % 30;
  for (int i = 0; i < count; i++) {
    swap(array[i%5] , array[i%5+1]);
  }
  
  for(int i = 0; i < 6; i++) {
    cout << array[i];
  }
  cout << endl;
}