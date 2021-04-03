/*************************************************************************
	> File Name: leetcode_471.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat  3 Apr 11:39:54 2021
 ************************************************************************/

#include<iostream>
using namespace std;


class Solution {
public:
    struct node {
        int x, y;
    };
    int dir[8][2] = {0, 1, 1, 0, 0, -1, -1, 0,
                    1, 1, 1, -1, -1, 1, -1, -1};
    int func(node  &t, vector<vector<char>> &mmap){
        int cnt = 0;
        for (int i = 0; i < 8; i++){
            int x = t.x + dir[i][0];
            int y = t.y + dir[i][1];
            if (x < 0 || y < 0 || x >= mmap.size() || y >= mmap[0].size()){
                continue;
            }
            if (mmap[x][y] == 'M') {
                cnt++;
            }
        }
        return cnt;
    }
    vector<vector<int> > pacificAtlantic(vector<vector<int>> &heights){
        int sx = click[0], sy = click[1];
        if (board[click[0]][click[1]] == 'M'){
            board[sx][sy] = 'X';
            return board;
        }
        queue<node> que;
        que.push((node) {sx, sy});
        board[sx][sy] = 'B';
        while (!que.empty()){
            node temp = que.front();
            que.pop();
            int cnt = func(temp, board);
            if (cnt != 0){
                board[temp.x][temp.y] = cnt + '0';
                continue;
            }
            for (int i = 0; i < 8; i++){
                int x = temp.x + dir[i][0];
                int y = temp.y + dir[i][1];
                if (x < 0 || y < 0 || x >= board.size() || y >= board[0].size()){
                    continue;
                }
                if (board[x][y] == 'E'){
                    board[x][y] = 'B';
                    que.push((node){x, y});
                }
            }
        }
        return board;
    }
};
