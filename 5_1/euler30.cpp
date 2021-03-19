/*************************************************************************
	> File Name: euler30.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 19 Mar 14:16:59 2021
 ************************************************************************/

#include<iostream>
using namespace std;


int num[15];

void init(){
    num[1] = 1;
    for(int i = 2; i < 10; i++){
        int t = i;
        for(int j = 0; j < 4; j++){
            t *= i;
        }
        num[i] = t;
        cout << i << ":" << num[i] << " ";
    }
    cout << endl;
}

int func(int x){
    int t = 0, rawx = x;
    while(x){
        t += num[x % 10];
        x /= 10;
    }
    return t == rawx;
}


int main(){
    init();
    int ans = 0;
    for(int i = 2; i < 1000000; i++){
        if (func(i)){
            ans += i;
            cout << i << endl;
        }
    }
    cout << ans << endl;
    return 0;
}
