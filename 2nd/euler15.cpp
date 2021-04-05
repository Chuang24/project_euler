/*************************************************************************
	> File Name: euler15.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun  4 Apr 15:19:01 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int ans[25][25];

int main(){
    for (int i = 1;  i <= 21; i++){
        for (int j = 1; j <= 21; j++){
            if ( i == 1 && j == 1 ){
                ans[i][j] = 1;
                continue;
            }
            ans[i][j] = ans[i - 1][j] + ans[i][j - 1];
        }
    }
    cout << ans[21][21] << endl;
    return 0;
}
