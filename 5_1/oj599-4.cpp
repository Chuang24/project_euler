/*************************************************************************
	> File Name: oj599-4.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 19 Mar 17:59:49 2021
 ************************************************************************/

#include<iostream>
using namespace std;


int n, target, num[1000005], mark[1000005];

int main(){
    scanf("%d%d", &n, &target);
    for(int i = 1; i <= n; i++){
        scanf("%d", &num[i]);
        mark[num[i]] = i;
    }
    for(int i = 1; i <= n; i++){
        int t = target - num[i];
        if (mark[t] != 0){
            printf("%d %d\n", i - 1, mark[t] - 1);
            return 0;
        }
    }
    printf("no\n");
    return 0;
}
