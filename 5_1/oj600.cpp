/*************************************************************************
	> File Name: 600.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 19 Mar 17:38:57 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int n, m, target, num[3005][3005];

int main(){
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            scanf("%d", &num[i][j]);
        }
    }
    scanf("%d", &target);
    int x = n, y = 1;
    while (x > 0 && y <= m){
        int t = num[x][y];
        if(t == target){
            printf("%d %d\n", x, y);
            return 0;
        }
        if(t > target){
            x--;
        }else{
            y++;
        }
    }
    printf("NO\n");
    return 0;
}
