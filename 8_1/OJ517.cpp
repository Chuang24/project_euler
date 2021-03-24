/*************************************************************************
	> File Name: OJ517.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 24 Mar 16:57:36 2021
 ************************************************************************/
#include<algorithm> 
#include<iostream>
using namespace std;

int check(int x, int y, int z){
    if (x > y){
        swap(x, y);
    }
    if (y > z){
        swap(y, z);
    }
    if (x + y > z) return 1;
    return 0;
}


int main(){
    int n, ans = 0;
    cin >> n;
    for(int i = 1; i < n / 2; i++){
        int x = (n - i) / 2;
        for(int j = i; j <= x; j++){
            
            int y = n - i - j;
            if (check(i, j, y)){
                ans ++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
