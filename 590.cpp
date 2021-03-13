/*************************************************************************
	> File Name: 590.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 12 Mar 11:01:29 2021
 ************************************************************************/
#include<cstdio>
#include<iostream>
using namespace std;

int n, m, num[1005][1005], utd[1005][1005], dtu[1005][1005], ans[1005][1005], mmax[1005], mmax_ind[1005], mmax2[1005];


int main(){
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            scanf("%d", &num[i][j]);
        }
    }
    for(int i = 1 ; i <= n; i++ ){
        for(int j = 1; j <= n; j++){
            utd[i][j] = max(utd[i - 1][j - 1], utd[i -1][j]) + num[i][j];
        }
    }

    for(int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++){
            dtu[i][j] = max(dtu[i + 1][j], dtu[i + 1][j + 1]) + num[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            ans[i][j] = utd[i][j] + dtu[i][j] - num[i][j];
        }
    }

    for(int i = 2; i <= n; i++){
        int t = 0, t2 = 0, ind = 0;
        for(int j = 1; j <= i; j++){
            if( t < ans[i][j] ){
                t2 = t;
                t = ans[i][j];
                ind = j;
            }else if (t2 < ans[i][j]){
                t2 = ans[i][j];
            }
        }
        mmax[i] = t, mmax_ind[i] = ind, mmax2[i] = t2;
    }
    for(int i =0; i < m; i++){
        int x, y;
        scanf("%d%d", &x, &y);
        if(x == 1){
            printf("-1\n");
        }else if (mmax_ind[x] == y){
            printf("%d\n", mmax2[x]);
        }else{
            printf("%d\n", mmax[x]);
        }
    }
    return 0;
}


