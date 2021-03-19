/*************************************************************************
	> File Name: euler36.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 19 Mar 13:28:26 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int func(int a, int x){
    int rawr = a, t = 0;
    while (a){
        t = t * x + a % x;
        a /= x;
    }
    return t == rawr;
}

int main() {
    int ans = 0;
    for(int i = 1; i < 1000000; i++){
        if (func(i, 10) && func(i, 2)){
            cout << i << endl;
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}
