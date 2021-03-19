/*************************************************************************
	> File Name: 599-3.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 19 Mar 16:16:53 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int n, target, num[1000005];

int main(){
    scanf("%d%d", &n, &target);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    int l = 0, r = n - 1;
    while(l < r){
        int t = num[l] + num[r];
        if (t == target){
            printf("%d %d\n", l, r);
            return 0;
        }
        if (t > target){
            r--;
        }else{
            l++;
        }
    }
    printf("No\n");
    return 0;
}
