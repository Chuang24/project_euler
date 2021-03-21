/*************************************************************************
	> File Name: leetcode_38.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Mar 18:00:06 2021
 ************************************************************************/

#include<iostream>
using namespace std;


void work(string &s, int cnt, char c){
    s += (char)(cnt + '0');
    s += c;
}


void func(string &s1, string &s2){
    int cnt = 0;
    for(int i = 0; i < s1.size(); i++){
        if(cnt == 0 || s1[i] == s1[i - 1]){
            cnt++;
        }else{
            work(s2, cnt, s1[i - 1]);
            cnt == 1;
        }
    }
    work(s2, cnt, s1[s1.size() - 1]);
}

string countAndSay(int n){
    string ans[2] = {"", "1"};
    int a = 0, b = 1;
    for(int i = 2; i <= n; i++){
        ans[a].clear();
        func(ans[b], ans[a]);
        swap(a, b);
    }
    return ans[b];
}
