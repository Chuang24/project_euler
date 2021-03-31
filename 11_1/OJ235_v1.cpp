/*************************************************************************
	> File Name: OJ235.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 30 Mar 12:44:48 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[15], cnt = 1;

void print(){
    for(int i = 1; i <= cnt; i++){
        if (i != 1){
            cout << " ";
        }
        cout << num[i];
    }
    cout << endl;
}

void func(int s){
    for(int i = s; i <= n; i++){
        num[cnt] = i;
        print();
        cnt++;
        func(i + 1);
        cnt--;
    }
}

int main(){
    cin >> n;
    func(1);
    return 0;
}
