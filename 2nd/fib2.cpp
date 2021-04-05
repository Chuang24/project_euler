/*************************************************************************
	> File Name: fib2.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun  4 Apr 15:01:43 2021
 ************************************************************************/

#include<iostream>
using namespace std;

long long num[50];

long long func(int x){
    if (x == 0 | x == 1){
        return x;
    }
    if (num[x] != 0){
        return num[x]; 
    }
    return num[x] = func(x - 1) + func(x - 2);
}



int main(){
    for (int i = 1; i < 50; i++){
        cout << i << ":" << func(i) << endl;
    }
    return 0;
}
