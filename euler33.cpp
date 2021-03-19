/*************************************************************************
	> File Name: euler33.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 19 Mar 11:37:53 2021
 ************************************************************************/

#include<iostream>
using namespace std;
 
int func(int x, int y){
    int x1 = x / 10, x2 = x % 10, y1 = y / 10, y2 = y % 10;
    if(!x1 || !x2 || !y1 || !y2){
        return 0;
    }
    if(x1 == y1 && x * y2 == y * x2) return 1;
    if(x1 == y2 && x * y1 == y * x2) return 1;
    if(x2 == y1 && x * y2 == y * x1) return 1;
    if(x2 == y2 && x * y1 == y * x1) return 1;
    return 0;
}


int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int a = 1, b = 1;
    for(int i = 11; i < 100; i++){
        for(int j = i + 1; j < 100; j++){
            if(func(i, j)){
                cout << i << " / " << j << endl;
                a *= i;
                b *= j;
            }
        }
    }
    int t = gcd(a, b);
    a /= t;
    b /= t;
    cout << a << " / " << b << endl;
    return 0;
}
