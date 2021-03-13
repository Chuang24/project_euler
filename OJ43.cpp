/*************************************************************************
	> File Name: 43.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 11 Mar 22:26:16 2021
 ************************************************************************/
#include<cstdio>
#include<iostream>
using namespace std;


int n, num[1005][1005];

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            scanf("%d", &num[i][j]);
        }
    }
    for(int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++ ){
            num[i][j] += max(num[i +  1][j], num[i + 1][j + 1]);
        }
    }
    printf("%d\n", num[1][1]);
    return 0;
    /*
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            num[i][j] += max(num[i - 1][j - 1], num[i - 1][j]);
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans = max(ans, num[n][i]);
    }
    printf("%d\n", ans);
    return 0;
    */
}

