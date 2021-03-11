/*************************************************************************
	> File Name: euler1.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 10 Mar 09:49:54 2021
 ************************************************************************/

#include<iostream>
using namespace std;


int main(){
    
    int t3 = (3 + 999) * (333 / 2); 
    int t5 = (5 + 995) * (199 / 2);
    int t15= (15 + 990) * (66 / 2);
    cout << t3 + t5 - t15; 
    return 0;


    int ans = 0;
    for(int i = 1; i < 1000; i++){
        if (i % 3 == 0 || i % 5 ==0){
            ans += i;
        }
    }
    cout << ans << endl; 
    return 0;
}
