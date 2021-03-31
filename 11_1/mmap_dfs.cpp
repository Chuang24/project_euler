/*************************************************************************
	> File Name: mmap_dfs.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 30 Mar 16:40:47 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int n, m, sx, sy, ex, ey;
int dir[4][2] = {0, 1, 1, 0, -1, -1, 0};
char mmap[105][105];

int func(int x, int y){
    for(int i = 0; i < 4; i++){
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if (xx == ex && yy == ey || mmap[xx][yy] == 'T'){
            return 1;
        }
        if (mmap[xx][yy] == '.'){
            mmap[xx][yy] = 0;
            int t = func(xx, yy);
            if (t == 1){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> mmap[i][j];
            if (mmap[i][j] == 'S'){
                sx = i, sy = j;
            }
            if (mmap[i][j] == 'T'){
                ex = i, ey = j;
            }
        }
    }
    int t = func(sx, sy);
    if (t == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
