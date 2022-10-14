#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<char>> board(4, vector<char>(4));

  for(int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      char val;
      cin >> val;
      board[i][j] = val;
    }
  }

  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      cout << board[3-i][3-j] << " ";
    }
    cout << endl;
  }
}