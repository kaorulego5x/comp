#include <bits/stdc++.h>
using namespace std;

int main() {
  double Xa, Ya, Xb, Yb, Xc, Yc; cin >> Xa >> Ya >> Xb >> Yb >> Xc >> Yc;
  double s = abs((Xb - Xa) * (Yc - Ya) - (Xc - Xa) * (Yb - Ya)) * 0.5;
  printf("%.4f\n", s);
}