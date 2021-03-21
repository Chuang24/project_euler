/*************************************************************************
	> File Name: leetcode_53.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Mar 18:18:50 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int maxSubArray(vector<int> &nums){
    int fin = nums[0], ans = nums[0];
    for(int i = 1; i < nums.size(); i++){
        ans = max(nums[i], ans + nums[i]);
        fin = max(fin, ans);
    }
    return fin;
}
