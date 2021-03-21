/*************************************************************************
	> File Name: leetcode_70.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Mar 21:54:41 2021
 ************************************************************************/

#include<iostream>
using namespace std;


int climbStairs(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    int ans[2] = {1, 2}, a = 0, b = 1;
    for(int i = 3; i <= n; i++){
        cout << "ans[a]: " << ans[a] << " ans[b]:" << ans[b] << endl;
        ans[a] += ans[b]; 
        swap(a, b);
    }
    return ans[b];
}

int main(){
    int a;
    cin >> a;
    cout << climbStairs(a) << endl;
    return 0;
}
