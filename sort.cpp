/*************************************************************************
	> File Name: sort.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 17 Mar 10:11:34 2021
 ************************************************************************/

#include<iostream>
#include<algorithm> 
using namespace std;
bool cmp(const int &a, const int &b){
    return a > b;
}

int main (){
    int num[55] = {0};
    num[0] = 9;
    num[1] = 2;
    num[2] = -5;
    num[3] = 5;
    num[4] = 7;
    num[5] = 22;
    sort(num, num + 6, cmp);
    for(int i = 0; i < 6; i++){
        cout << num[i] << endl;
    }
    return 0;
}
