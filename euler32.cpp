/*************************************************************************
	> File Name: euler32.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 18 Mar 23:18:50 2021
 ************************************************************************/
#include<cmath>
#include<iostream>
using namespace std;

int digit(int x){
    return floor(log10(x)) + 1;
}

int work(int *mark, int x){
    while(x){
        int t = x % 10;
        if (mark[t] == 1){
            return 0;
        }
        mark[t] = 1;
        x /= 10;
    }
    return 1;
}

int func(int x, int y, int z){
    int mark[10] = {0};
    if (work(mark, x) && work(mark, y) && work(mark,z) && mark[0] == 0){
        return 1;
    }
    return 0;
}

int main(){
    int ans = 0, check[10005] = {0};
    for(int i = 2; i < 99; i++){
        for(int j = i + 1; 1; j++){
            int a = digit(i), b = digit(j), c = digit(i * j);
            if(a + b + c > 9){
                break;
            }
            if (a + b + c == 9){
                if (func(i, j, i * j)){
                    cout << i << " " << j << " = " << i * j << endl;
                    if(check[i * j] == 0){
                        check[i * j] = 1;
                        ans += i * j;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
