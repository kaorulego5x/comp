#include <bits/stdc++.h>
using namespace std;

int main(){

    // whileループ
    int i = 0;
    while (i < 5){ // i = 0, 1, 2, 3, 4
        cout << "Hi";
        i++;
    }

    i = 0;
    // 2つずつ飛ばす
    while (i < 10){ // i = 0, 2, 4, 6, 8
        cout << "Hi";
        i += 2;
    }

    // 1 ~ 10の合計値
    int sum = 0;
    i = 1;
    while(i <= 10){
        sum += i;
        i++;
    }
    cout << sum << endl; // 55

    // forループ
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            cout << "ぬける" << endl;
            break; // i == 3 の時点でループから抜ける
        }
        cout << i << endl;
    }
    // 0 1 2 ぬける 

    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            cout << "とばす" << endl;
            continue; // i == 3 を飛ばす
        }
        cout << i << endl;
    }
    // 0 1 2 とばす 4 

    // 多重ループ
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "i: " << i << ", j:" << j << endl;
        }
    }
    /*
    i:0, j:0
    i:0, j:1
    i:1, j:0
    i:1, j:1
    */

    // B - Coins

    // 配列
    vector<int> nums(N); 
    int N = 10;
    for(int i = 0; i < N; i++){
        cin >> nums[i];
    }
    cout << nums.size(); //10
    nums.push_back(10);

    // STL関数
    int answer = min(10, 5);
    cout << answer; // 5;
    // min関数の引数は10と5 返り値は5

    int a = 10, b = 5;
    swap(a, b); //返り値がない関数 
    cout << a << b; // 5 10

    // C - Unification
}