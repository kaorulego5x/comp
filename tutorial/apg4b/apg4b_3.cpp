#include <bits/stdc++.h>
using namespace std;


// 関数定義

int my_min(int x, int y){
    if(x < y){
        return x;
    }else{
        return y;
    }
}

void hello(string text){
    cout << "Hello" << text << endl;
    return;
} // 返り値がない"void"

int main(){
    int answer = my_min(10, 5);
    cout << answer; // 5
    hello("World"); // Hello World
}

// 再帰関数
int sum(int n){
    if (n == 0){
        return 0; // ベースケースがないと無限ループに陥る
    }
    return n + sum(n-1);
}

// sum(5) => 15

int fib(int x) {
    if (x == 0 || x == 1) {
        return 1; // ベースケース
    } else {
        return fib(x-1)+fib(x-2);
    }
}

// fib(5) => 8

// グラフアルゴリズム入門 DFS
