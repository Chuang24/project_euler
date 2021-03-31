/*************************************************************************
	> File Name: OJ235.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 30 Mar 12:44:48 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[15];

void print(int cnt){
    for(int i = 1; i <= cnt; i++){
        if (i != 1){
            cout << " ";
        }
        cout << num[i];
    }
    cout << endl;
}

void func(int s, int deep){
    for(int i = s; i <= n; i++){
        num[deep] = i;
        print(deep);
        func(i + 1, deep + 1);
    }
}

int main(){
    cin >> n;
    func(1, 1);
    return 0;
}
