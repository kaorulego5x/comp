#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, x;
    int res = 0;
    cin >> a >> b >> c >> x;
    for(int x = 0; x <= a; x++){
        for(int y = 0; y <= b; y++){
            for(int z = 0; z <= c; z++){
                if (500 * x + 100 * y + 50 * z == x) res++;
            }
        }
    }
    cout << res << endl;
}