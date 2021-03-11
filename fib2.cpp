/*************************************************************************
	> File Name: fib2.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 11 Mar 14:00:29 2021
 ************************************************************************/
//记忆化数组 + 递归 ～= 递推
#include<iostream>
using namespace std;
long long num[50];

long long func(int x){
    if (x == 0 || x == 1){
        return x;
    }
    if (num[x] != 0){
        return num[x];
    }
    return num[x]= func(x - 1) + func(x - 2);
}


int main(){
    for (int i = 1; i < 50; i++){
        cout << i << ":" << func(i) << endl;
    }

    return 0;
}
