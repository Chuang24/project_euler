/*************************************************************************
	> File Name: OJ538.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri  2 Apr 17:18:12 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int n, mark[25], arr[25][25], flag;


void func(int x){
    if (flag == 1){
        cout << "-";
    }
    flag = 1;
    cout << x; 
    for (int i = 1 ; i <= n; i++){
        if (mark[i] == 0 && arr[x][i] == 1){
            mark[i] = 1;
            func(i);
        }
    }
}


int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++){
        if (mark[i] == 0){
            mark[i] = 1;
            func(i);
        }
    }
    cout << endl;
    return 0;
}
