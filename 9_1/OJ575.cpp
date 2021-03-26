/*************************************************************************
	> File Name: OJ575.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Mar 23:17:43 2021
 ************************************************************************/

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string t;
        int t1;
        cin >> t >> t1;
        m[t] = t1;
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        string t;
        cin >> t; 
        cout << m[t] << endl;
    }
    return 0;
}

