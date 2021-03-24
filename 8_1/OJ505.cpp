/*************************************************************************
	> File Name: OJ505.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 23 Mar 22:11:18 2021
 ************************************************************************/
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

bool cmp(const string &a, const string &b){
    return a + b > b + a;
}

string s[100005];
int n;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    sort(s, s + n, cmp);
    for(int i = 0; i < n; i++){
        cout << s[i];
    }
    cout << endl;

    return 0;
}
