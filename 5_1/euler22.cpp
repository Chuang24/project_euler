/*************************************************************************
	> File Name: euler22.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 18 Mar 22:42:42 2021
 ************************************************************************/

#include<iostream>
#include<string> 
using namespace std;

string name[6005];
int n;

int main(){
    while( cin >> name[n] ){
        n++;
    }
    sort(name, name + n);
    long long ans = 0;
    for(int i = 0; i < n; i++){
        int t = 0;
        for(int j = 0; j < name[i].size(); j++){
            t += name[i][j] - 'A' + 1;
        }

        ans += t * (i + 1);
    }
    cout << ans << endl;
    return 0;
}
