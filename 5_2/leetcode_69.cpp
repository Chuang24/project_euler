/*************************************************************************
	> File Name: leetcode_66.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Mar 21:39:16 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int mySqrt(int x){
    long long l = 0, r = x;
    while(l != r){
        long long mid = (l + r + 1) / 2;
        if (mid * mid <= x){
            l = mid;
        }else{
            r = mid - 1;
        }
    }
    return r;
}

