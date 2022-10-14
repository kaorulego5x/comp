#include <bits/stdc++.h>
using namespace std;

int main(){
    // 入出力
    cout << "Hello World" << endl;
    
    // 四則
    cout << 2 + 1 << endl; // 2
    cout << 4 - 3 << endl; // 7
    cout << 6 * 5 << endl; // 30
    cout << 8 / 2 << endl; // 4
    
    cout << 10 % 3 << endl; // 1


    // 変数
    int a = 10;
    cout << a << a + 5 << endl; // 10 15

    // 複合代入
    a += 5;
    cout << a << endl; // 15
    a++;
    cout << a << endl; // 16
    
    //右から左へ代入
    int b = 5;
    b = a;
    cout << a << b << endl; // 10 10

    double pi = 3.14;
    string greet = "Hello";
    char t = 'a';
    bool lie = false;


    // if
    if (a == 7){
        cout << "best";
    }else if (a != 5){
        cout << "good";
    }else if (a >= 10){
        cout << "bad";
    }

    int x, y, z;
    cin >> x >> y >> z;
    if (x == 3 && y == 3 && z == 4){
        cout << "great";
    }

    // A - Product
}