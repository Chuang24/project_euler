/*************************************************************************
	> File Name: euler_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat  3 Apr 16:03:24 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int sum;

int main(){
    for (int i = 1; i <= 1000; i++){
        if (i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
    
}
