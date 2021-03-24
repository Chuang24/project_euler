/*************************************************************************
	> File Name: OJ518.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 24 Mar 17:08:38 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int x, ans = 0, now = 1, total = 0;
    cin >> x;
    while(1){
        for(int i = 0; i < now; i++){
            ans += now;
            total++;
            if(total == x){
                cout << ans << endl;
                return 0;
            }
        }
        now++;
    }
    return 0;
}
