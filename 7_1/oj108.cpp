/*************************************************************************
	> File Name: oj108.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 21 Mar 11:59:52 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int isOdd(int n){
    if (n > 0 && ( n % 2 != 0 )){
        return 1;
    }
    return 0;
}
int main(){
    int a[15], cnt = 0;
    for(int i = 0; i < 10; i++){
        cin >> a[i];
        if(isOdd(a[i])){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;

}
