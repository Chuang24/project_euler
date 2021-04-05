/*************************************************************************
	> File Name: euler_6.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat  3 Apr 17:53:38 2021
 ************************************************************************/

#include<iostream>
using namespace std;
int sum1, sum2;

int main(){
    for (int i = 0; i <= 100; i++){
        sum1 += i * i;
        sum2 += i; 
    }
    int diff = sum2 * sum2 - sum1;
    cout << diff << endl;
    return 0;
}
