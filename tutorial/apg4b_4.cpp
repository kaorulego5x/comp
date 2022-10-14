#include <bits/stdc++.h>
using namespace std;

// STLコンテナ キューとスタック (他にもmap,setなど)
int main(){
    queue<int> q;
    q.push(10);
    q.push(3);
    q.push(6);
    q.push(1);

    while(!q.empty()){ //空になるまで繰り返す
        cout << q.front();
        q.pop();
    }
    // 10 3 6 1

    stack<int> s;
    s.push(10);
    s.push(1);
    s.push(3);

    while(!s.empty()){ //空になるまで繰り返す
        cout << s.top();
        q.pop();
    }

    // スタックの問題
}