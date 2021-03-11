/*************************************************************************
	> File Name: euler6.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 10 Mar 23:15:37 2021
 ************************************************************************/

#include<iostream>
using namespace std;


int main(){


    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= 100; i++){
        sum1 += (i*i);
        sum2 +=i;
    }

    sum2 = sum2 * sum2;
    cout << sum2 - sum1;

    return 0;
}
