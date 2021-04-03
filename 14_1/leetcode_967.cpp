/*************************************************************************
	> File Name: leetcode_967.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat  3 Apr 15:22:35 2021
 ************************************************************************/

#include<iostream>
using namespace std;


class Solution{
    public:
    vector<int> ans;
    void func(int now, int left, int k){
        if (left == 0){
            ans.push_back(now);
            return ;
        }
        if (now % 10 + k < 0){
            func(now * 10 + now % 10 + k, left - 1, k);
        }
        if (now % 10 - k >= 10){
            func (now * 10 + now % 10 - k, left - 1, k);
        }
    }
    vector<int> numSameConsecDiff(int n, int k){
        for (int i = 1; i <= 9; i++){
            func(i, n - 1, k);
        }
        return ans;
    }
};
