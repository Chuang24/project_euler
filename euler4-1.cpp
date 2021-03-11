/*************************************************************************
	> File Name: euler4-1.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 10 Mar 23:04:34 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int func(int x){
    int raw = x, t = 0;
    while(x){
        t = t * 10 + x % 10;
        x /= 10;
    }
    return raw == t; 
}

int main (){
    int ans = 0;
    for (int i = 100; i < 1000; i++){
        for (int j = i; j < 1000; j++){
            if (func(i * j)){
                ans = max(ans, i * j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
