/*************************************************************************
	> File Name: OJ398.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 31 Mar 17:33:37 2021
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

struct node{
    int x, y, step;
};

int n, m, sx, sy;
int dir[8][2] = {1, 2, 2, 1, 1, -2, -2, 1, -1, 2, 2, -1, -1, -2, -2, -1};
int ans[405][405];

int main(){
    cin >> n >> m >> sx >> sy;
    ans[sx][sy] = -1;
    queue<node> que;
    que.push((node){sx, sy, 0});
    while(!que.empty()){
        node temp = que.front();
        que.pop();
        for(int i = 0; i < 8; i++){
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (x < 1 || y < 1 || x > n || y > m || ans[x][y] != 0){
                continue;
            }
            ans[x][y] = temp.step + 1;
            que.push((node){x, y, ans[x][y]});
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if (j != 1){
                cout << " ";
            }
            if (ans[i][j] == -1){
                cout << 0;
            } else if(ans[i][j] == 0){
                cout << -1;
            } else{
                cout << ans[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}
