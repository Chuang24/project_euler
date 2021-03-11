/*************************************************************************
	> File Name: euler8.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 10 Mar 23:29:09 2021
 ************************************************************************/

#include<iostream>
using namespace std;


char str[1005];

int main(){
    long long ans = 0, now = 1, zero_cnt = 0;
    cin >> str; 
    for (int i = 0; str[i]; i++){
        if ( i < 13 ){
            now *= str[i] - '0';
        }else if (str[i] != '0' ){
            now *= str[i] - '0';
        }else{
            zero_cnt++;
        }
        if ( i >= 13 ){
            if (str[i - 13] != '0'){
                now /= str[i - 13] - '0';
            }else{
                zero_cnt--;
            }
        }
        if (zero_cnt == 0){
            ans = max(ans, now);
        }
    }
    cout << ans << endl;
    return 0;

}
