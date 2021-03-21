/*************************************************************************
	> File Name: OJ477.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 21 Mar 12:30:13 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    char s[105];
    cin >> s;
    int last = -1, ans = 0;
    for(int i = 0; s[i]; i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            if(last == -1){
                last = i;
            }else{
                ans = max(ans, i - last);
                last = i;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
