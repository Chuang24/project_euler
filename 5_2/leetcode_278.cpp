/*************************************************************************
	> File Name: leetcode_278.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Mar 21:48:20 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int firstBadVersion(int n){
    long long l = 1, r = n;
    while(l != r){
        long long mid = (l + r) / 2;
        if(isBadVersion(mid)){
            r = mid;
        }else{
            l = mid + 1;
        }
    }
    return l;
}
