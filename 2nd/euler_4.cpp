/*************************************************************************
	> File Name: euler_4.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat  3 Apr 17:04:48 2021
 ************************************************************************/

#include<iostream>
using namespace std;

bool palindrome(int n){
    int temp = n, t = 0;
    while(n){
        t = t * 10 + n % 10;
        n /= 10;
    }
    return temp == t;
}

int main(){
    int ans = 0;
    for (int i = 100; i < 1000; i++){
        for (int j = i;  j < 1000 ; j++){
            int  product  = i * j;
            cout << product << endl;
            if (palindrome(product)){
                ans = max(ans, product);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
