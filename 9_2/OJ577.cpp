/*************************************************************************
	> File Name: OJ577.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Mar 21:59:32 2021
 ************************************************************************/

#include<iostream>
#include<string>
#include<map>

using namespace std;

map<string, int> m;
string ans;
int cnt;

int main(){
    string t;
    while(cin >> t){
        for(int i = 0; i < t.size(); i++){
            if (t[i] >= 'A' && t[i] <= 'Z'){
                t[i] += 'a' - 'A';
            }
        }
        m[t]++;
    }
    for(auto it = m.begin(); it != m.end(); it++){
        if (it->second > cnt){
            ans = it->first;
            cnt = it->second;
        }
    }
    cout << ans << " " << cnt << endl;
    return 0;
}
