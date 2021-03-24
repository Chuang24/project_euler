/*************************************************************************
	> File Name: OJ516.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 24 Mar 15:28:27 2021
 ************************************************************************/

#include<iostream>
using namespace std;

char s[100005];
int numc[100005], numw[100005], n; 
long long ans;

int main(){
    cin >> n >> s;
    for(int i = 0; s[i]; i++){
        if(i == 0){
            numc[i] = (s[i] == 'C');//Checking if there is a C on i 
        }else{
            numc[i] = numc[i - 1] + (s[i] == 'C');
        }
        //cout << "numc[" << i << "]=" << numc[i] << endl; 
    }
    for(int i = n - 1; i >= 0; i--){
        if(i == n - 1){
            numw[i] = (s[i] == 'W');
        } else{
            numw[i] = numw[i + 1] + (s[i] == 'W');
        }
        //cout << "numw[" << i << "]=" << numw[i] << endl; 
    }
    for(int i = 0; s[i]; i++){
        if(s[i] == 'O'){
            ans += (long long) numc[i] * numw[i];
        }
    }
    cout << ans << endl;
    return 0;
}
