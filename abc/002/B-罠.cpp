#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  vector<char> vowels = {'a', 'i', 'u', 'e', 'o'};

  for (char vowel: vowels) {
    str.erase(std::remove(str.begin(), str.end(), vowel), str.end());
  }
  cout << str;
}