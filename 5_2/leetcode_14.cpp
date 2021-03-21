/*************************************************************************
	> File Name: leetcode_14.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 19 Mar 19:25:53 2021
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution{
public:
    string longestCommonPrefix(vector<string>& strs){
        if(strs.size() == 0){ 
            return " ";
        }
        string ans = strs[0];
        for(int i = 1; i < strs.size(); i++){
            string t = ans;
            ans = "";
            for(int j = 0; j < strs[i].size() && j < t.size(); j++){
                if(strs[i][j] == t[j]){
                    ans += t[j];
                }else{
                    break;
                }
            }
        if (ans == "") break;
        }

        return ans;
        

    }
}
