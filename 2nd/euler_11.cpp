/*************************************************************************
	> File Name: euler_11.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat  3 Apr 16:08:29 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int num[30][30], ans;
int dirx[4] = {-1, 0, 1, 1};
int diry[4] = {1, 1, 1, 0};

int main(){
    // input matrix
    for (int i = 5; i < 25; i++){
        for (int j = 5; j < 25; j++){
            cin >> num[i][j];
        }
    }
    
    for (int i = 5; i < 25; i++){
        for (int j = 5; j < 25; j++){
            for (int k = 0; k < 4; k++){
                int t = num[i][j];
                for (int l = 1; l <= 3; l++){
                    int x = i + l * dirx[k];
                    int y = j + l * diry[k];
                    t *= num[x][y];
                }
                ans = max(ans, t);
            }
        }
    }
    cout << ans << endl;

}
