/*************************************************************************
	> File Name: euler_8.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun  4 Apr 14:52:38 2021
 ************************************************************************/

#include<iostream>
using namespace std;

string s[1005];

int main(){
    cin >> s;
    long long ans, zero_cnt = 0, now = 1;
    //the product of first 13 digits 
    for (int i = 0; str[i]; i++){
        if(i < 13){
            now *= str[i] - '0';
        }else if (str[i] != '0'){
            now *= str[i] - '0';
        }else{
            // if the number is 0
            zero_cnt++;
        }

        if (i > 13){
            if (str[i - 13] != '0'){
                now /= str[i- 13] - '0';
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
