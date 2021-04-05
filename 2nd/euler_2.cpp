/*************************************************************************
	> File Name: euler_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat  3 Apr 16:48:57 2021
 ************************************************************************/

#include<iostream>
using namespace std;

long long temp,  ans = 0;

int main(){
    int a = 1, b = 2;
    while( b < 4000000 ){
        if (b % 2 == 0){
            ans += b;
        }
        b = b + a; 
        a = b - a; 
    }
    cout << ans << endl;
    return 0;
}
