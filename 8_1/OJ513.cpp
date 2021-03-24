/*************************************************************************
	> File Name: OJ513.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 23 Mar 23:10:56 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int m, t, ans;

int have(int x){
    while (x){
        if (x % 10 == t) return 1;
        x /= 10;
    }
    return 0;
}

int main(){
    cin >> m >> t;
    for(int i = 1; i <= m; i++){
        while (have(i)) i++;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
