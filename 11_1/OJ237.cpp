/*************************************************************************
	> File Name: OJ237.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 30 Mar 15:14:08 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[15], mark[15], cnt = 1;

void print(){
    for(int i = 1; i <= n; i++){
        if (!i){
            cout << " ";
        }
        cout << num[i];
    }
    cout << endl;
}

void func(){
    if( cnt == n + 1 ){
        print();
        return ;
    }
    for(int i = 1; i <= n; i++){
        if (mark[i] == 0){
            num[cnt] = i;
            mark[i] = 1;
            cnt++;
            func();
            cnt--;
            mark[i] = 0;
        }
    }
}

int main(){
    cin >> n;
    func();
    return 0;
}
