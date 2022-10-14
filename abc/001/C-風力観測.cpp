#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> degName{"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};
  vector<double> disCat{0, 0.25, 1.55, 3.35, 5.45, 7.95, 10.75, 13.85, 17.15, 20.75, 24.45, 28.45, 32.65};

  int deg, dis; cin >> deg >> dis;
  int catIndex = (deg * 10 + 1125) / 2250 % 16;
  int disRes = 0;
  for (int i = 0; i < disCat.size(); i++) {
    if(disCat[i] * 60 <= dis) { 
      if(i != disCat.size() - 1) { 
        continue; 
      } else {
        disRes = i;
        break;
      } 
    } else {
      disRes = i - 1;
      break;
    }
  }
  if(disRes == 0) {
    cout << "C 0" << endl;
  } else {
    cout << degName[catIndex] << " " << disRes << endl;
  }
}