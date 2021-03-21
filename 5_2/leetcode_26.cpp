/*************************************************************************
	> File Name: leetcode_26.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Mar 15:40:43 2021
 ************************************************************************/

#include<iostream>
using namespace std;


class Solution{
public:
    int removeDuplicates(vector<int> &nums){
        if(nums.size() == 0){
            return 0;
        }
        int last = nums[0], pos = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != last){
                last = nums[i];
                nums[pos] = nums[i];
                pos++;
            }
        }
        return pos;
    }
};
