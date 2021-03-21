/*************************************************************************
	> File Name: leetcode_88.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Mar 22:56:49 2021
 ************************************************************************/

#include<iostream>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n){
    for(int i = m + n - 1; i >= 0; i--){
        if (n == 0 || m != 0 && nums1[m - 1] > nums2[n - 1]){
            nums1[i] = nums1[m - 1];
            m--;
        }else{
            nums1[i] = nums2[n - 1];
            n--;
        }
    }
};
