/*************************************************************************
	> File Name: leetcode_136.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Mar 23:02:41 2021
 ************************************************************************/

#include<iostream>
using namespace std;


int singleNumber(vector<int> &nums){
    int ans = 0;
    for (int i = 0; i < nums.size(); i++){
        ans ^= nums[i];
    }
    return ans;
}
