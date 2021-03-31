/*************************************************************************
	> File Name: OJ236.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 30 Mar 15:09:05 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int n, m, num[15], cnt = 1;

void print(){
    for(int i = 1; i <= m; i++){
        if(i != 1){
            cout << " ";
        }
        cout << num[i];
    }
    cout << endl;
}

void func(int s, int left){
    if (left == 0){
        print();
        return ;
    }
    for(int i = s; i <= n; i++){
        num[cnt] = i;
        cnt++;
        func(i + 1, left - 1);
        cnt--;
    }
}
int main(){
    cin >> n >> m;
    func(1, m);
    return 0;
}
