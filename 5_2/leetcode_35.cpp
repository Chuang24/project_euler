/*************************************************************************
	> File Name: leetcode_35.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Mar 17:48:35 2021
 ************************************************************************/

#include<iostream>
using namespace std;


class Solution{
public:
    int searchInsert(vector<int>&nums, int target){
        if(nums[nums.size() - 1] < target){
            return nums.size();
        }
        int l = 0, r = nums.size() - 1;
        while(l != r){
            int mid = (l + r) / 2;
            if(nums[mid] >= target){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
}
