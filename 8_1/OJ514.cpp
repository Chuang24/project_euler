/*************************************************************************
	> File Name: Oj509.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 23 Mar 22:47:03 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int n, ans, num[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int func(int x){
    if (x == 0){
        return 6;
    }   
    int t = 0;
    while (x){
        t += num[x % 10];
        x /= 10;
    }
    return t;
}

int main(){
    cin >> n;
    for(int i = 0; i <= 2000; i++){
        for(int j = 0; j <= 2000; j++){
            if (func(i) + func(j) + func(i + j) + 4 == n){
                ans++;
                cout << i << " + " << j << " = " << i + j << endl;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
