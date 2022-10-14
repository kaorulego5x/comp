#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  const vector<char> cards = {'a', 't', 'c', 'o', 'd', 'e', 'r'};

  bool flag = true;
  for (int i = 0; i < S.size(); i++) {
    if(S[i] == T[i]) { continue; }
    if(S[i] == '@') {
      bool xFlag = false;
      for (char card: cards) {
        if(card == T[i]) {
          xFlag = true;
          break;
        }
      }
      if(!xFlag) {
        flag = false;
        break;
      }
    } else if(T[i] == '@') {
      bool xFlag = false;
      for (char card: cards) {
        if(card == S[i]) {
          xFlag = true;
          break;
        }
      }
      if(!xFlag) {
        flag = false;
        break;
      }
    } else {
      flag = false;
      break;
    }
  }

  if(flag) {
    cout << "You can win" << endl;
  } else {
    cout << "You will lose" << endl;
  }
}