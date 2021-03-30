/*************************************************************************
	> File Name: 378.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Mar 17:12:13 2021
 ************************************************************************/

#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> sta;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
            sta.push(s[i]);
        }else if(s[i] == ')'){
            if (!sta.empty() && sta.top() == '('){
                sta.pop();
            }else{
                cout << "NO" << endl;
                return 0;
            }
        }else if(s[i] == ']'){
            if (!sta.empty() && sta.top() == '['){
                sta.pop();
            } else{
                cout << "NO" << endl;
                return 0;
            }
            }else if (s[i] == '}'){
                if (!sta.empty() && sta.top() == '{'){
                    sta.pop();
                } else{
                    cout << "NO" << endl;
                    return 0;
                }
            }
    }
    if (!sta.empty()){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
     return 0;
}
