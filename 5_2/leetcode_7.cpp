/*************************************************************************
	> File Name: leetcode_7.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 19 Mar 18:57:38 2021
 ************************************************************************/

#include<iostream>
using namespace std;


class Solution{
public:
    int reverse(int x){
        int ans = 0;
        while(x){
            if(
                ans > INT_MAX / 10 || ans < INT_MAX / 10 ||
                ans == INT_MAX / 10 && x % 10 > 7 || 
                ans == INT_MIN / 10 && x % 10 < -8
              ){
                  ans = 0;
                  break;
              }
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        retur ans;
    }
};
