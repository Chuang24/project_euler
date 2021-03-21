/*************************************************************************
	> File Name: leetcode_58.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Mar 18:09:54 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int lengthOfLastWord(string s){
    int l = -1, r = -1;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] != ' ' && r == -1){
            r = i;
        }else if (r != - 1 && s[i] == ' '){
            l = i;
            break;
        }
    }
    if (r == -1){
        return 0;
    }
    return r - l;
}
