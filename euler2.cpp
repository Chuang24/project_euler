/*************************************************************************
	> File Name: euler2.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 10 Mar 22:33:30 2021
 ************************************************************************/

#include<iostream>
using namespace std;
//Even fibonacci numbers 

int main(){
    long long ans = 0;
    int a = 1, b = 2;
    while(b < 4000000){
        if (b % 2 == 0){
            ans += b;
        }
        b = b + a;
        a = b - a;
    }
    cout << ans << endl;
    return 0;
}
