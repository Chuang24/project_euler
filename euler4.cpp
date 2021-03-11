/*************************************************************************
	> File Name: euler4.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 10 Mar 22:43:31 2021
 ************************************************************************/

#include<iostream>
using namespace std;
//largest palindrome product 


//Find the largest palindrome made from the product of 2 3-digit numbers

int func(int x){
    int raw  = x, t = 0;
    while(x){
        t = t * 10 + x % 10;
        x /= 10;
    }
    return raw  == t;
}

int main(){
    int ans = 0;
    for (int i = 100; i < 1000; i++){
        for (int j = i; i < 1000; j++){
            if (func(i * j)){
                ans = max(ans, i * j);
             }       
        }   
    }
    cout << ans << endl;
    return 0;
}
