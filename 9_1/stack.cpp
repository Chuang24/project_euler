/*************************************************************************
	> File Name: stack.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Mar 18:32:39 2021
 ************************************************************************/
#include<stack>
#include<string>
#include<iostream>
using namespace std;

int main(){
    stack<string> sta;
    sta.push("1234");
    sta.push("abc");
    cout << sta.size() << endl;
    cout<< stat.top() << endl;

    return 0;
}
