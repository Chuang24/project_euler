/*************************************************************************
	> File Name: OJ405.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 31 Mar 12:45:12 2021
 ************************************************************************/

#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;

struct node{
    int x, y;
};

int n, m, k, t, ans[3005][3005];
stack<node> sta;
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
char mmap[3005][3005];

void func(int x, int y){
    for (int i = 0; i < 4; i++){
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        //|-------------edge------------------|  |-----去重-------|
        if(xx < 1 || yy < 1 || xx > n || yy > m || ans[xx][yy] != 0){
            continue;
        }
        if(mmap[x][y] != mmap[xx][yy]){
            t++;
            ans[xx][yy] = 1;
            sta.push((node){xx, yy});
            func(xx, yy);
        }
    }
}

int main(){
    scanf("%d%d%d", &n, &m, &k);
    for(int i = 1; i <= n; i++){
        scanf("%s", &mmap[i][1]);
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m ; j++){
            if (ans[i][j] == 0){
                t = 1;
                ans[i][j] = 1;
                sta.push((node){i, j});
                func(i, j);
                while(!sta.empty()){
                    node temp = sta.top();
                    sta.pop();
                    ans[temp.x][temp.y] = t;
                }
            }
        }
    }
    for(int i = 0; i < k; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", ans[a][b]);
    }
    return 0;
}

