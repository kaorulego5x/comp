//C - 幅優先探索

#include <bits/stdc++.h>
using namespace std;
// 宣言

string maze[50]; // 迷路データ
int R; // 行数
int C; // 列数
int sy, sx; // スタート地点
int gy, gx; // ゴール地点
int score[50][50]; // 手数
bool visited[50][50]; // 訪問履歴
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
// 幅優先探索

void bfs(int i, int j) {
  // キューを準備
  queue<pair<int,int> > Q;
  score[i][j] = 0;
  // スタート地点の座標をキューにプッシュ
  Q.push(make_pair(i, j));
  // キューが空になるまで処理を実行
  while(!Q.empty()) {
    // 探索の起点となる座標を記憶してからポップ
    pair<int,int> q = Q.front();
    Q.pop();
    int x = q.first;
    int y = q.second;
    // 起点を元に座標を移動
    for (int k = 0; k < 4; k++) {
      int nx = x + dx[k];
      int ny = y + dy[k];
      // 移動先が壁か訪問済みなら処理をスキップ
      if (maze[nx][ny] == '#' || visited[nx][ny]) {
        continue;
      }
      // 移動先のスコアを起点のスコア+1にする
      score[nx][ny] = score[x][y] + 1;
      // 移動先の座標を訪問済みにする
      visited[nx][ny] = true;
      // 訪問先の座標をキューにプッシュ(順番が来たら探索の起点になる)
      Q.push(make_pair(nx, ny));
    }
  }
}

int main() {
  // 入力
  cin >> R >> C; // 行列数
  cin >> sy >> sx; // スタート地点
  cin >> gy >> gx; // ゴール地点
  // 迷路データ
  for (int i = 0; i < R; i++ ){
    cin >> maze[i];
  }
  // 幅優先探索
  bfs(sy - 1, sx - 1);
  // 出力
  cout << score[gy - 1][gx - 1] << endl;
  return 0;
}
