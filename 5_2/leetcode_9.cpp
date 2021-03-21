/*************************************************************************
	> File Name: leetcode_9.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 19 Mar 19:01:22 2021
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution{
public: 
    bool isPalindrome(int x){
        if(x < 0){
            return false; 
        }
        long long t = 0, raw = x;
        while(x) {
            t = t * 10 + x % 10;
            x /= 10;
        }
        return t == raw;
    }
}
